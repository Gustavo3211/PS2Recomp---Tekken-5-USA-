#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4A10
// Address: 0x2f4a10 - 0x2f4b30
void sub_002F4A10_0x2f4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4A10_0x2f4a10");
#endif

    switch (ctx->pc) {
        case 0x2f4a28u: goto label_2f4a28;
        case 0x2f4a8cu: goto label_2f4a8c;
        case 0x2f4af0u: goto label_2f4af0;
        case 0x2f4af8u: goto label_2f4af8;
        case 0x2f4b08u: goto label_2f4b08;
        case 0x2f4b18u: goto label_2f4b18;
        case 0x2f4b20u: goto label_2f4b20;
        default: break;
    }

    ctx->pc = 0x2f4a10u;

    // 0x2f4a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f4a20: 0xc0a8c6a  jal         func_2A31A8
    ctx->pc = 0x2F4A20u;
    SET_GPR_U32(ctx, 31, 0x2F4A28u);
    ctx->pc = 0x2F4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A20u;
    // 0x2f4a24: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A31A8u, 0x2F4A20u, 0x2F4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A28u;
label_2f4a28:
    // 0x2f4a28: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2f4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2f4a2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4a30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4A30u;
    {
        const bool branch_taken_0x2f4a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A30u;
        // 0x2f4a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a30) {
            ctx->pc = 0x2F4A48u;
            goto label_2f4a48;
        }
    }
    ctx->pc = 0x2F4A38u;
    // 0x2f4a38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f4a3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4a40: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4A40u;
    {
        const bool branch_taken_0x2f4a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4a40) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F4A48u;
label_2f4a48:
    // 0x2f4a48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f4a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a50: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4a54:
    // 0x2f4a54: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F4A54u;
    {
        const bool branch_taken_0x2f4a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a54) {
            ctx->pc = 0x2F4A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4A54u;
            // 0x2f4a58: 0x26050118  addiu       $a1, $s0, 0x118 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A90u;
            goto label_2f4a90;
        }
    }
    ctx->pc = 0x2F4A5Cu;
    // 0x2f4a5c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4a60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4A60u;
    {
        const bool branch_taken_0x2f4a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a60) {
            ctx->pc = 0x2F4A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4A60u;
            // 0x2f4a64: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A7Cu;
            goto label_2f4a7c;
        }
    }
    ctx->pc = 0x2F4A68u;
    // 0x2f4a68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4a6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4a70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4A70u;
    {
        const bool branch_taken_0x2f4a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4a70) {
            ctx->pc = 0x2F4A84u;
            goto label_2f4a84;
        }
    }
    ctx->pc = 0x2F4A78u;
    // 0x2f4a78: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4a7c:
    // 0x2f4a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4a84:
    // 0x2f4a84: 0xc0bd0ba  jal         func_2F42E8
    ctx->pc = 0x2F4A84u;
    SET_GPR_U32(ctx, 31, 0x2F4A8Cu);
    ctx->pc = 0x2F42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F42E8u, 0x2F4A84u, 0x2F4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A8Cu;
label_2f4a8c:
    // 0x2f4a8c: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x2f4a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
label_2f4a90:
    // 0x2f4a90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4a94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4A94u;
    {
        const bool branch_taken_0x2f4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A94u;
        // 0x2f4a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a94) {
            ctx->pc = 0x2F4AACu;
            goto label_2f4aac;
        }
    }
    ctx->pc = 0x2F4A9Cu;
    // 0x2f4a9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f4aa0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4aa4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4AA4u;
    {
        const bool branch_taken_0x2f4aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4aa4) {
            ctx->pc = 0x2F4AB8u;
            goto label_2f4ab8;
        }
    }
    ctx->pc = 0x2F4AACu;
label_2f4aac:
    // 0x2f4aac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f4ab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ab4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4ab8:
    // 0x2f4ab8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4AB8u;
    {
        const bool branch_taken_0x2f4ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ab8) {
            ctx->pc = 0x2F4ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4AB8u;
            // 0x2f4abc: 0x261000fc  addiu       $s0, $s0, 0xFC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AF0u;
            goto label_2f4af0;
        }
    }
    ctx->pc = 0x2F4AC0u;
    // 0x2f4ac0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4ac4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4AC4u;
    {
        const bool branch_taken_0x2f4ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ac4) {
            ctx->pc = 0x2F4AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4AC4u;
            // 0x2f4ac8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AE0u;
            goto label_2f4ae0;
        }
    }
    ctx->pc = 0x2F4ACCu;
    // 0x2f4acc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4ad0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4ad4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4AD4u;
    {
        const bool branch_taken_0x2f4ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4ad4) {
            ctx->pc = 0x2F4AE8u;
            goto label_2f4ae8;
        }
    }
    ctx->pc = 0x2F4ADCu;
    // 0x2f4adc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4ae0:
    // 0x2f4ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ae4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4ae8:
    // 0x2f4ae8: 0xc0bd0ba  jal         func_2F42E8
    ctx->pc = 0x2F4AE8u;
    SET_GPR_U32(ctx, 31, 0x2F4AF0u);
    ctx->pc = 0x2F4AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AE8u;
    // 0x2f4aec: 0x261000fc  addiu       $s0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F42E8u, 0x2F4AE8u, 0x2F4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AF0u;
label_2f4af0:
    // 0x2f4af0: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2F4AF0u;
    SET_GPR_U32(ctx, 31, 0x2F4AF8u);
    ctx->pc = 0x2F4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AF0u;
    // 0x2f4af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F4AF0u, 0x2F4AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AF8u;
label_2f4af8:
    // 0x2f4af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4AF8u;
    {
        const bool branch_taken_0x2f4af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4af8) {
            ctx->pc = 0x2F4B10u;
            goto label_2f4b10;
        }
    }
    ctx->pc = 0x2F4B00u;
    // 0x2f4b00: 0xc0bb8e4  jal         func_2EE390
    ctx->pc = 0x2F4B00u;
    SET_GPR_U32(ctx, 31, 0x2F4B08u);
    ctx->pc = 0x2F4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B00u;
    // 0x2f4b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F4B00u, 0x2F4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B08u;
label_2f4b08:
    // 0x2f4b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4B08u;
    {
        const bool branch_taken_0x2f4b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b08) {
            ctx->pc = 0x2F4B18u;
            goto label_2f4b18;
        }
    }
    ctx->pc = 0x2F4B10u;
label_2f4b10:
    // 0x2f4b10: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F4B10u;
    SET_GPR_U32(ctx, 31, 0x2F4B18u);
    ctx->pc = 0x2F4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B10u;
    // 0x2f4b14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F4B10u, 0x2F4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B18u;
label_2f4b18:
    // 0x2f4b18: 0xc0bd232  jal         func_2F48C8
    ctx->pc = 0x2F4B18u;
    SET_GPR_U32(ctx, 31, 0x2F4B20u);
    ctx->pc = 0x2F48C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F48C8u, 0x2F4B18u, 0x2F4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B20u;
label_2f4b20:
    // 0x2f4b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4b24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f4b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B28u;
        // 0x2f4b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B30u;
}
