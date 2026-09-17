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

// Function: sub_002C4BC8
// Address: 0x2c4bc8 - 0x2c4d48
void sub_002C4BC8_0x2c4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4BC8_0x2c4bc8");
#endif

    switch (ctx->pc) {
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c70u: goto label_2c4c70;
        case 0x2c4c88u: goto label_2c4c88;
        case 0x2c4ca8u: goto label_2c4ca8;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cc8u: goto label_2c4cc8;
        case 0x2c4cf4u: goto label_2c4cf4;
        default: break;
    }

    ctx->pc = 0x2c4bc8u;

    // 0x2c4bc8: 0x8f82bb00  lw          $v0, -0x4500($gp)
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949632)));
    // 0x2c4bcc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c4bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c4bd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c4bdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c4bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c4be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c4be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c4be4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2C4BE4u;
    {
        const bool branch_taken_0x2c4be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BE4u;
        // 0x2c4be8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4be4) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4BECu;
    // 0x2c4bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4bf0: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C4BF0u;
    SET_GPR_U32(ctx, 31, 0x2C4BF8u);
    ctx->pc = 0x2C4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BF0u;
    // 0x2c4bf4: 0xaf82bb00  sw          $v0, -0x4500($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C4BF0u, 0x2C4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BF8u;
label_2c4bf8:
    // 0x2c4bf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bfc: 0x5260004b  beql        $s3, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C4BFCu;
    {
        const bool branch_taken_0x2c4bfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4bfc) {
            ctx->pc = 0x2C4C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4BFCu;
            // 0x2c4c00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D2Cu;
            goto label_2c4d2c;
        }
    }
    ctx->pc = 0x2C4C04u;
    // 0x2c4c04: 0xc08926e  jal         func_2249B8
    ctx->pc = 0x2C4C04u;
    SET_GPR_U32(ctx, 31, 0x2C4C0Cu);
    ctx->pc = 0x2C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C04u;
    // 0x2c4c08: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249B8u, 0x2C4C04u, 0x2C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C0Cu;
label_2c4c0c:
    // 0x2c4c0c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4c10: 0x34633800  ori         $v1, $v1, 0x3800
    ctx->pc = 0x2c4c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14336);
    // 0x2c4c14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c4c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4c18: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x2c4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2c4c1c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2c4c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4c20: 0x2e030370  sltiu       $v1, $s0, 0x370
    ctx->pc = 0x2c4c20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)880) ? 1 : 0);
    // 0x2c4c24: 0x54600041  bnel        $v1, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C4C24u;
    {
        const bool branch_taken_0x2c4c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c24) {
            ctx->pc = 0x2C4C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C24u;
            // 0x2c4c28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D2Cu;
            goto label_2c4d2c;
        }
    }
    ctx->pc = 0x2C4C2Cu;
    // 0x2c4c2c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2c4c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2c4c30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4c34: 0x24e74378  addiu       $a3, $a3, 0x4378
    ctx->pc = 0x2c4c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17272));
    // 0x2c4c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c3c: 0xc089248  jal         func_224920
    ctx->pc = 0x2C4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C44u);
    ctx->pc = 0x2C4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C3Cu;
    // 0x2c4c40: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2C4C3Cu, 0x2C4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C44u;
label_2c4c44:
    // 0x2c4c44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C4C44u;
    {
        const bool branch_taken_0x2c4c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C44u;
        // 0x2c4c48: 0xaf82cb08  sw          $v0, -0x34F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c44) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4C4Cu;
    // 0x2c4c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c4c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c50: 0x50a021  addu        $s4, $v0, $s0
    ctx->pc = 0x2c4c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c4c54: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C4C54u;
    SET_GPR_U32(ctx, 31, 0x2C4C5Cu);
    ctx->pc = 0x2C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C54u;
    // 0x2c4c58: 0x24520200  addiu       $s2, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C4C54u, 0x2C4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C5Cu;
label_2c4c5c:
    // 0x2c4c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c60: 0x1a60000f  blez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4C60u;
    {
        const bool branch_taken_0x2c4c60 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C60u;
        // 0x2c4c64: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c60) {
            ctx->pc = 0x2C4CA0u;
            goto label_2c4ca0;
        }
    }
    ctx->pc = 0x2C4C68u;
    // 0x2c4c68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C4C68u;
    {
        const bool branch_taken_0x2c4c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C68u;
        // 0x2c4c6c: 0x8f82bb04  lw          $v0, -0x44FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c68) {
            ctx->pc = 0x2C4C94u;
            goto label_2c4c94;
        }
    }
    ctx->pc = 0x2C4C70u;
label_2c4c70:
    // 0x2c4c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c4c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c78: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x2c4c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x2c4c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c4c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c80: 0xc0b122a  jal         func_2C48A8
    ctx->pc = 0x2C4C80u;
    SET_GPR_U32(ctx, 31, 0x2C4C88u);
    ctx->pc = 0x2C4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C80u;
    // 0x2c4c84: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C48A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C48A8u, 0x2C4C80u, 0x2C4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C88u;
label_2c4c88:
    // 0x2c4c88: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4C88u;
    {
        const bool branch_taken_0x2c4c88 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C88u;
        // 0x2c4c8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c88) {
            ctx->pc = 0x2C4CA0u;
            goto label_2c4ca0;
        }
    }
    ctx->pc = 0x2C4C90u;
    // 0x2c4c90: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
label_2c4c94:
    // 0x2c4c94: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x2c4c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c4c98: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C4C98u;
    {
        const bool branch_taken_0x2c4c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c98) {
            ctx->pc = 0x2C4C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C98u;
            // 0x2c4c9c: 0x8e0600c0  lw          $a2, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4c70;
        }
    }
    ctx->pc = 0x2C4CA0u;
label_2c4ca0:
    // 0x2c4ca0: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C4CA0u;
    SET_GPR_U32(ctx, 31, 0x2C4CA8u);
    ctx->pc = 0x2C4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CA0u;
    // 0x2c4ca4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C4CA0u, 0x2C4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CA8u;
label_2c4ca8:
    // 0x2c4ca8: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4CA8u;
    {
        const bool branch_taken_0x2c4ca8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CA8u;
        // 0x2c4cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ca8) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4CB0u;
label_2c4cb0:
    // 0x2c4cb0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2c4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c4cb4: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x2c4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x2c4cb8: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C4CB8u;
    {
        const bool branch_taken_0x2c4cb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CB8u;
        // 0x2c4cbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cb8) {
            ctx->pc = 0x2C4D1Cu;
            goto label_2c4d1c;
        }
    }
    ctx->pc = 0x2C4CC0u;
    // 0x2c4cc0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4CC0u;
    {
        const bool branch_taken_0x2c4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CC0u;
        // 0x2c4cc4: 0x8f82bb04  lw          $v0, -0x44FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc0) {
            ctx->pc = 0x2C4D10u;
            goto label_2c4d10;
        }
    }
    ctx->pc = 0x2C4CC8u;
label_2c4cc8:
    // 0x2c4cc8: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x2c4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x2c4ccc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x2c4cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2c4cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cd4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2c4cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c4cd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c4cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cdc: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2c4ce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c4ce4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2c4ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c4ce8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c4ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cec: 0xc0b122a  jal         func_2C48A8
    ctx->pc = 0x2C4CECu;
    SET_GPR_U32(ctx, 31, 0x2C4CF4u);
    ctx->pc = 0x2C4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CECu;
    // 0x2c4cf0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C48A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C48A8u, 0x2C4CECu, 0x2C4CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CF4u;
label_2c4cf4:
    // 0x2c4cf4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c4cf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cfc: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x2c4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x2c4d00: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2c4d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c4d04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4D04u;
    {
        const bool branch_taken_0x2c4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d04) {
            ctx->pc = 0x2C4D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4D04u;
            // 0x2c4d08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D20u;
            goto label_2c4d20;
        }
    }
    ctx->pc = 0x2C4D0Cu;
    // 0x2c4d0c: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
label_2c4d10:
    // 0x2c4d10: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x2c4d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c4d14: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C4D14u;
    {
        const bool branch_taken_0x2c4d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d14) {
            ctx->pc = 0x2C4D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4D14u;
            // 0x2c4d18: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4cc8;
        }
    }
    ctx->pc = 0x2C4D1Cu;
label_2c4d1c:
    // 0x2c4d1c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2c4d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2c4d20:
    // 0x2c4d20: 0x1e60ffe3  bgtz        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C4D20u;
    {
        const bool branch_taken_0x2c4d20 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2C4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D20u;
        // 0x2c4d24: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d20) {
            ctx->pc = 0x2C4CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4cb0;
        }
    }
    ctx->pc = 0x2C4D28u;
label_2c4d28:
    // 0x2c4d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4d2c:
    // 0x2c4d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c4d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c4d30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c4d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4d34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c4d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c4d38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c4d38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4d3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c4d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c4d40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D40u;
        // 0x2c4d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D48u;
}
