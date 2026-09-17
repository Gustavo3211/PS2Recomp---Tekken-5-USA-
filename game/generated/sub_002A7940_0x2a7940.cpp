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

// Function: sub_002A7940
// Address: 0x2a7940 - 0x2a7a18
void sub_002A7940_0x2a7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7940_0x2a7940");
#endif

    switch (ctx->pc) {
        case 0x2a799cu: goto label_2a799c;
        case 0x2a79b0u: goto label_2a79b0;
        default: break;
    }

    ctx->pc = 0x2a7940u;

    // 0x2a7940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a794c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a7958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a795c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a7960: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7964: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2a7964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a7968: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a7968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a796c: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x2a796cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2a7970: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a7974: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a7974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a7978: 0x2810  mfhi        $a1
    ctx->pc = 0x2a7978u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2a797c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a7980: 0x45880b  movn        $s1, $v0, $a1
    ctx->pc = 0x2a7980u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2a7984: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2a7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a7988: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2a7988u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a798c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A798Cu;
    {
        const bool branch_taken_0x2a798c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a798c) {
            ctx->pc = 0x2A79A0u;
            goto label_2a79a0;
        }
    }
    ctx->pc = 0x2A7994u;
    // 0x2a7994: 0xc0a9e24  jal         func_2A7890
    ctx->pc = 0x2A7994u;
    SET_GPR_U32(ctx, 31, 0x2A799Cu);
    ctx->pc = 0x2A7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7994u;
    // 0x2a7998: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7890u, 0x2A7994u, 0x2A799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A799Cu;
label_2a799c:
    // 0x2a799c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2a79a0:
    // 0x2a79a0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A79A0u;
    {
        const bool branch_taken_0x2a79a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79A0u;
        // 0x2a79a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79a0) {
            ctx->pc = 0x2A79D0u;
            goto label_2a79d0;
        }
    }
    ctx->pc = 0x2A79A8u;
    // 0x2a79a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A79A8u;
    {
        const bool branch_taken_0x2a79a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79A8u;
        // 0x2a79ac: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79a8) {
            ctx->pc = 0x2A79B8u;
            goto label_2a79b8;
        }
    }
    ctx->pc = 0x2A79B0u;
label_2a79b0:
    // 0x2a79b0: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2a79b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a79b4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2a79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2a79b8:
    // 0x2a79b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a79bc: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2a79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2a79c0: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x2a79c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a79c4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A79C4u;
    {
        const bool branch_taken_0x2a79c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79C4u;
        // 0x2a79c8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79c4) {
            ctx->pc = 0x2A79B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a79b0;
        }
    }
    ctx->pc = 0x2A79CCu;
    // 0x2a79cc: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2a79ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2a79d0:
    // 0x2a79d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a79d4: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x2a79d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2a79d8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a79dc: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x2a79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2a79e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a79e4: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2a79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2a79e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a79ec: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a79ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a79f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A79F0u;
    {
        const bool branch_taken_0x2a79f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79F0u;
        // 0x2a79f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79f0) {
            ctx->pc = 0x2A79FCu;
            goto label_2a79fc;
        }
    }
    ctx->pc = 0x2A79F8u;
    // 0x2a79f8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2a79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2a79fc:
    // 0x2a79fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a79fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7a00: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a7a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7a08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7a0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a7a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7a10: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A10u;
        // 0x2a7a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A18u;
}
