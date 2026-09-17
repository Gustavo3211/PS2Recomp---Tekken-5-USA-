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

// Function: sub_002FD9F8
// Address: 0x2fd9f8 - 0x2fdab0
void sub_002FD9F8_0x2fd9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD9F8_0x2fd9f8");
#endif

    switch (ctx->pc) {
        case 0x2fda30u: goto label_2fda30;
        case 0x2fda40u: goto label_2fda40;
        case 0x2fda80u: goto label_2fda80;
        case 0x2fda98u: goto label_2fda98;
        default: break;
    }

    ctx->pc = 0x2fd9f8u;

    // 0x2fd9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fd9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fda00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fda00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fda04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fda04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fda08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fda08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fda0c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2fda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2fda10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fda10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fda14: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FDA14u;
    {
        const bool branch_taken_0x2fda14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fda14) {
            ctx->pc = 0x2FDA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDA14u;
            // 0x2fda18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA9Cu;
            goto label_2fda9c;
        }
    }
    ctx->pc = 0x2FDA1Cu;
    // 0x2fda1c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2fda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fda20: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FDA20u;
    {
        const bool branch_taken_0x2fda20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fda20) {
            ctx->pc = 0x2FDA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDA20u;
            // 0x2fda24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA9Cu;
            goto label_2fda9c;
        }
    }
    ctx->pc = 0x2FDA28u;
    // 0x2fda28: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FDA28u;
    SET_GPR_U32(ctx, 31, 0x2FDA30u);
    ctx->pc = 0x2FDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA28u;
    // 0x2fda2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FDA28u, 0x2FDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA30u;
label_2fda30:
    // 0x2fda30: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fda30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fda34: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FDA34u;
    {
        const bool branch_taken_0x2fda34 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA34u;
        // 0x2fda38: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda34) {
            ctx->pc = 0x2FDA90u;
            goto label_2fda90;
        }
    }
    ctx->pc = 0x2FDA3Cu;
    // 0x2fda3c: 0x0  nop
    ctx->pc = 0x2fda3cu;
    // NOP
label_2fda40:
    // 0x2fda40: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fda44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fda44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fda48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fda48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fda4c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2fda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fda50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fda54: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FDA54u;
    {
        const bool branch_taken_0x2fda54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fda54) {
            ctx->pc = 0x2FDA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDA54u;
            // 0x2fda58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA84u;
            goto label_2fda84;
        }
    }
    ctx->pc = 0x2FDA5Cu;
    // 0x2fda5c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2fda5cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fda60: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2fda60u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2fda64: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2fda64u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fda68: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2fda68u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2fda6c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2fda6cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2fda70: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2fda70u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2fda74: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2fda74u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2fda78: 0xc0bf4e6  jal         func_2FD398
    ctx->pc = 0x2FDA78u;
    SET_GPR_U32(ctx, 31, 0x2FDA80u);
    ctx->pc = 0x2FDA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA78u;
    // 0x2fda7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD398u, 0x2FDA78u, 0x2FDA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA80u;
label_2fda80:
    // 0x2fda80: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fda80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2fda84:
    // 0x2fda84: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2fda84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fda88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2FDA88u;
    {
        const bool branch_taken_0x2fda88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA88u;
        // 0x2fda8c: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda88) {
            ctx->pc = 0x2FDA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fda40;
        }
    }
    ctx->pc = 0x2FDA90u;
label_2fda90:
    // 0x2fda90: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FDA90u;
    SET_GPR_U32(ctx, 31, 0x2FDA98u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FDA90u, 0x2FDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA98u;
label_2fda98:
    // 0x2fda98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fda98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fda9c:
    // 0x2fda9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fda9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdaa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAA4u;
        // 0x2fdaa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAACu;
    // 0x2fdaac: 0x0  nop
    ctx->pc = 0x2fdaacu;
    // NOP
    ctx->pc = 0x2fdab0u;
}
