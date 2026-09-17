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

// Function: sub_002D4948
// Address: 0x2d4948 - 0x2d4aa8
void sub_002D4948_0x2d4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4948_0x2d4948");
#endif

    switch (ctx->pc) {
        case 0x2d4990u: goto label_2d4990;
        case 0x2d49a0u: goto label_2d49a0;
        case 0x2d49b8u: goto label_2d49b8;
        case 0x2d49d0u: goto label_2d49d0;
        case 0x2d49d8u: goto label_2d49d8;
        case 0x2d49e8u: goto label_2d49e8;
        case 0x2d4a0cu: goto label_2d4a0c;
        case 0x2d4a34u: goto label_2d4a34;
        case 0x2d4a3cu: goto label_2d4a3c;
        case 0x2d4a44u: goto label_2d4a44;
        case 0x2d4a60u: goto label_2d4a60;
        case 0x2d4a68u: goto label_2d4a68;
        case 0x2d4a70u: goto label_2d4a70;
        case 0x2d4a78u: goto label_2d4a78;
        case 0x2d4a80u: goto label_2d4a80;
        default: break;
    }

    ctx->pc = 0x2d4948u;

    // 0x2d4948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d494c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d4950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d495c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4960: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d4964: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d4968: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2d4968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2d496c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D496Cu;
    {
        const bool branch_taken_0x2d496c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D496Cu;
        // 0x2d4970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d496c) {
            ctx->pc = 0x2D4988u;
            goto label_2d4988;
        }
    }
    ctx->pc = 0x2D4974u;
    // 0x2d4974: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D4974u;
    {
        const bool branch_taken_0x2d4974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4974u;
        // 0x2d4978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4974) {
            ctx->pc = 0x2D4A58u;
            goto label_2d4a58;
        }
    }
    ctx->pc = 0x2D497Cu;
    // 0x2d497c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2D497Cu;
    {
        const bool branch_taken_0x2d497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D497Cu;
        // 0x2d4980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d497c) {
            ctx->pc = 0x2D4A88u;
            goto label_2d4a88;
        }
    }
    ctx->pc = 0x2D4984u;
    // 0x2d4984: 0x0  nop
    ctx->pc = 0x2d4984u;
    // NOP
label_2d4988:
    // 0x2d4988: 0xc089622  jal         func_225888
    ctx->pc = 0x2D4988u;
    SET_GPR_U32(ctx, 31, 0x2D4990u);
    ctx->pc = 0x2D498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4988u;
    // 0x2d498c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2D4988u, 0x2D4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4990u;
label_2d4990:
    // 0x2d4990: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D4990u;
    {
        const bool branch_taken_0x2d4990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4990) {
            ctx->pc = 0x2D4994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4990u;
            // 0x2d4994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4A84u;
            goto label_2d4a84;
        }
    }
    ctx->pc = 0x2D4998u;
    // 0x2d4998: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2D4998u;
    SET_GPR_U32(ctx, 31, 0x2D49A0u);
    ctx->pc = 0x2D499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4998u;
    // 0x2d499c: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2D4998u, 0x2D49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49A0u;
label_2d49a0:
    // 0x2d49a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d49a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49a4: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D49A4u;
    {
        const bool branch_taken_0x2d49a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49A4u;
        // 0x2d49a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49a4) {
            ctx->pc = 0x2D4A84u;
            goto label_2d4a84;
        }
    }
    ctx->pc = 0x2D49ACu;
    // 0x2d49ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d49acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49b0: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2D49B0u;
    SET_GPR_U32(ctx, 31, 0x2D49B8u);
    ctx->pc = 0x2D49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49B0u;
    // 0x2d49b4: 0x3c134000  lui         $s3, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2D49B0u, 0x2D49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49B8u;
label_2d49b8:
    // 0x2d49b8: 0x36731800  ori         $s3, $s3, 0x1800
    ctx->pc = 0x2d49b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)6144);
    // 0x2d49bc: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2d49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x2d49c0: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D49C0u;
    {
        const bool branch_taken_0x2d49c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49C0u;
        // 0x2d49c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49c0) {
            ctx->pc = 0x2D4A1Cu;
            goto label_2d4a1c;
        }
    }
    ctx->pc = 0x2D49C8u;
    // 0x2d49c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d49c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49cc: 0x0  nop
    ctx->pc = 0x2d49ccu;
    // NOP
label_2d49d0:
    // 0x2d49d0: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2D49D0u;
    SET_GPR_U32(ctx, 31, 0x2D49D8u);
    ctx->pc = 0x2D49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49D0u;
    // 0x2d49d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2D49D0u, 0x2D49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49D8u;
label_2d49d8:
    // 0x2d49d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d49d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d49dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49e0: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2D49E0u;
    SET_GPR_U32(ctx, 31, 0x2D49E8u);
    ctx->pc = 0x2D49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49E0u;
    // 0x2d49e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2D49E0u, 0x2D49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49E8u;
label_2d49e8:
    // 0x2d49e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d49e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d49ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d49f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d49f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d49f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d49f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d49f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d49fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D49FCu;
    {
        const bool branch_taken_0x2d49fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49FCu;
        // 0x2d4a00: 0x240700f6  addiu       $a3, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49fc) {
            ctx->pc = 0x2D4A0Cu;
            goto label_2d4a0c;
        }
    }
    ctx->pc = 0x2D4A04u;
    // 0x2d4a04: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2D4A04u;
    SET_GPR_U32(ctx, 31, 0x2D4A0Cu);
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2D4A04u, 0x2D4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A0Cu;
label_2d4a0c:
    // 0x2d4a0c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2d4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2d4a10: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d4a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4a14: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D4A14u;
    {
        const bool branch_taken_0x2d4a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a14) {
            ctx->pc = 0x2D4A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4A14u;
            // 0x2d4a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D49D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d49d0;
        }
    }
    ctx->pc = 0x2D4A1Cu;
label_2d4a1c:
    // 0x2d4a1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d4a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4a20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a28: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4a2c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2D4A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D4A34u);
    ctx->pc = 0x2D4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A2Cu;
    // 0x2d4a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2D4A2Cu, 0x2D4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A34u;
label_2d4a34:
    // 0x2d4a34: 0xc0b5572  jal         func_2D55C8
    ctx->pc = 0x2D4A34u;
    SET_GPR_U32(ctx, 31, 0x2D4A3Cu);
    ctx->pc = 0x2D4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A34u;
    // 0x2d4a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D55C8u, 0x2D4A34u, 0x2D4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A3Cu;
label_2d4a3c:
    // 0x2d4a3c: 0xc0b56d6  jal         func_2D5B58
    ctx->pc = 0x2D4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D4A44u);
    ctx->pc = 0x2D4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A3Cu;
    // 0x2d4a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5B58u, 0x2D4A3Cu, 0x2D4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A44u;
label_2d4a44:
    // 0x2d4a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4a48: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2d4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x2d4a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D4A4Cu;
    {
        const bool branch_taken_0x2d4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A4Cu;
        // 0x2d4a50: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4a4c) {
            ctx->pc = 0x2D4A80u;
            goto label_2d4a80;
        }
    }
    ctx->pc = 0x2D4A54u;
    // 0x2d4a54: 0x0  nop
    ctx->pc = 0x2d4a54u;
    // NOP
label_2d4a58:
    // 0x2d4a58: 0xc0b52cc  jal         func_2D4B30
    ctx->pc = 0x2D4A58u;
    SET_GPR_U32(ctx, 31, 0x2D4A60u);
    ctx->pc = 0x2D4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B30u, 0x2D4A58u, 0x2D4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A60u;
label_2d4a60:
    // 0x2d4a60: 0xc0b5310  jal         func_2D4C40
    ctx->pc = 0x2D4A60u;
    SET_GPR_U32(ctx, 31, 0x2D4A68u);
    ctx->pc = 0x2D4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A60u;
    // 0x2d4a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C40u, 0x2D4A60u, 0x2D4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A68u;
label_2d4a68:
    // 0x2d4a68: 0xc0b54fe  jal         func_2D53F8
    ctx->pc = 0x2D4A68u;
    SET_GPR_U32(ctx, 31, 0x2D4A70u);
    ctx->pc = 0x2D4A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A68u;
    // 0x2d4a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53F8u, 0x2D4A68u, 0x2D4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A70u;
label_2d4a70:
    // 0x2d4a70: 0xc0b5456  jal         func_2D5158
    ctx->pc = 0x2D4A70u;
    SET_GPR_U32(ctx, 31, 0x2D4A78u);
    ctx->pc = 0x2D4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A70u;
    // 0x2d4a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5158u, 0x2D4A70u, 0x2D4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A78u;
label_2d4a78:
    // 0x2d4a78: 0xc0b557e  jal         func_2D55F8
    ctx->pc = 0x2D4A78u;
    SET_GPR_U32(ctx, 31, 0x2D4A80u);
    ctx->pc = 0x2D4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A78u;
    // 0x2d4a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D55F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D55F8u, 0x2D4A78u, 0x2D4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A80u;
label_2d4a80:
    // 0x2d4a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4a84:
    // 0x2d4a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4a88:
    // 0x2d4a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4a90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d4a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4a94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4a98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A9Cu;
        // 0x2d4aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4AA4u;
    // 0x2d4aa4: 0x0  nop
    ctx->pc = 0x2d4aa4u;
    // NOP
    ctx->pc = 0x2d4aa8u;
}
