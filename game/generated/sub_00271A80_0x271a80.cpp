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

// Function: sub_00271A80
// Address: 0x271a80 - 0x271bc0
void sub_00271A80_0x271a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271A80_0x271a80");
#endif

    switch (ctx->pc) {
        case 0x271ae8u: goto label_271ae8;
        case 0x271b24u: goto label_271b24;
        case 0x271b38u: goto label_271b38;
        case 0x271b50u: goto label_271b50;
        case 0x271b64u: goto label_271b64;
        default: break;
    }

    ctx->pc = 0x271a80u;

    // 0x271a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271a84: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x271a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x271a94: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x271a98: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x271A98u;
    {
        const bool branch_taken_0x271a98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x271A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A98u;
        // 0x271a9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a98) {
            ctx->pc = 0x271AC8u;
            goto label_271ac8;
        }
    }
    ctx->pc = 0x271AA0u;
    // 0x271aa0: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x271aa4: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x271aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x271aa8: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x271aa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x271aac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271AACu;
    {
        const bool branch_taken_0x271aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AACu;
        // 0x271ab0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271aac) {
            ctx->pc = 0x271AC8u;
            goto label_271ac8;
        }
    }
    ctx->pc = 0x271AB4u;
    // 0x271ab4: 0x84840096  lh          $a0, 0x96($a0)
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x271ab8: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x271ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x271abc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x271abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271ac0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x271AC0u;
    {
        const bool branch_taken_0x271ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC0u;
        // 0x271ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ac0) {
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271AC8u;
label_271ac8:
    // 0x271ac8: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x271ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x271acc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271ACCu;
    {
        const bool branch_taken_0x271acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ACCu;
        // 0x271ad0: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271acc) {
            ctx->pc = 0x271B00u;
            goto label_271b00;
        }
    }
    ctx->pc = 0x271AD4u;
    // 0x271ad4: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x271ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x271ad8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271AD8u;
    {
        const bool branch_taken_0x271ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AD8u;
        // 0x271adc: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ad8) {
            ctx->pc = 0x271B00u;
            goto label_271b00;
        }
    }
    ctx->pc = 0x271AE0u;
    // 0x271ae0: 0xc09bb60  jal         func_26ED80
    ctx->pc = 0x271AE0u;
    SET_GPR_U32(ctx, 31, 0x271AE8u);
    ctx->pc = 0x26ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED80u, 0x271AE0u, 0x271AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AE8u;
label_271ae8:
    // 0x271ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x271ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271aec: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x271AECu;
    {
        const bool branch_taken_0x271aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AECu;
        // 0x271af0: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271aec) {
            ctx->pc = 0x271BA4u;
            goto label_271ba4;
        }
    }
    ctx->pc = 0x271AF4u;
    // 0x271af4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x271af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271af8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x271AF8u;
    {
        const bool branch_taken_0x271af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AF8u;
        // 0x271afc: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271af8) {
            ctx->pc = 0x271BA4u;
            goto label_271ba4;
        }
    }
    ctx->pc = 0x271B00u;
label_271b00:
    // 0x271b00: 0x90430198  lbu         $v1, 0x198($v0)
    ctx->pc = 0x271b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x271b04: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x271B04u;
    {
        const bool branch_taken_0x271b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B04u;
        // 0x271b08: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b04) {
            ctx->pc = 0x271B88u;
            goto label_271b88;
        }
    }
    ctx->pc = 0x271B0Cu;
    // 0x271b0c: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x271b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x271b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x271b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x271b14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271B14u;
    {
        const bool branch_taken_0x271b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271b14) {
            ctx->pc = 0x271B48u;
            goto label_271b48;
        }
    }
    ctx->pc = 0x271B1Cu;
    // 0x271b1c: 0xc09bb76  jal         func_26EDD8
    ctx->pc = 0x271B1Cu;
    SET_GPR_U32(ctx, 31, 0x271B24u);
    ctx->pc = 0x26EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EDD8u, 0x271B1Cu, 0x271B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B24u;
label_271b24:
    // 0x271b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b28: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x271B28u;
    {
        const bool branch_taken_0x271b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x271b28) {
            ctx->pc = 0x271B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271B28u;
            // 0x271b2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271B30u;
    // 0x271b30: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271B30u;
    SET_GPR_U32(ctx, 31, 0x271B38u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271B30u, 0x271B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B38u;
label_271b38:
    // 0x271b38: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x271b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271b3c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271b40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271B40u;
    {
        const bool branch_taken_0x271b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B40u;
        // 0x271b44: 0x84830356  lh          $v1, 0x356($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 854)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b40) {
            ctx->pc = 0x271B70u;
            goto label_271b70;
        }
    }
    ctx->pc = 0x271B48u;
label_271b48:
    // 0x271b48: 0xc09bb76  jal         func_26EDD8
    ctx->pc = 0x271B48u;
    SET_GPR_U32(ctx, 31, 0x271B50u);
    ctx->pc = 0x26EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EDD8u, 0x271B48u, 0x271B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B50u;
label_271b50:
    // 0x271b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b54: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x271B54u;
    {
        const bool branch_taken_0x271b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B54u;
        // 0x271b58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b54) {
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271B5Cu;
    // 0x271b5c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271B5Cu;
    SET_GPR_U32(ctx, 31, 0x271B64u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271B5Cu, 0x271B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B64u;
label_271b64:
    // 0x271b64: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x271b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271b68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271b6c: 0x848303a4  lh          $v1, 0x3A4($a0)
    ctx->pc = 0x271b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
label_271b70:
    // 0x271b70: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271b74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271B74u;
    {
        const bool branch_taken_0x271b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B74u;
        // 0x271b78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b74) {
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271B7Cu;
    // 0x271b7c: 0xa4900006  sh          $s0, 0x6($a0)
    ctx->pc = 0x271b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x271b80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271B80u;
    {
        const bool branch_taken_0x271b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B80u;
        // 0x271b84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b80) {
            ctx->pc = 0x271BA4u;
            goto label_271ba4;
        }
    }
    ctx->pc = 0x271B88u;
label_271b88:
    // 0x271b88: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x271b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x271b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271B8Cu;
    {
        const bool branch_taken_0x271b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B8Cu;
        // 0x271b90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b8c) {
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271B94u;
    // 0x271b94: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x271b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x271b98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271b9c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x271b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x271ba0: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x271ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_271ba4:
    // 0x271ba4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x271ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271ba8:
    // 0x271ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x271BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB4u;
        // 0x271bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BBCu;
    // 0x271bbc: 0x0  nop
    ctx->pc = 0x271bbcu;
    // NOP
    ctx->pc = 0x271bc0u;
}
