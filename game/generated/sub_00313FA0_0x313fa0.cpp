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

// Function: sub_00313FA0
// Address: 0x313fa0 - 0x3150f0
void sub_00313FA0_0x313fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313FA0_0x313fa0");
#endif

    switch (ctx->pc) {
        case 0x313fd0u: goto label_313fd0;
        case 0x313ff8u: goto label_313ff8;
        case 0x314040u: goto label_314040;
        case 0x314070u: goto label_314070;
        case 0x3140b0u: goto label_3140b0;
        case 0x314150u: goto label_314150;
        case 0x3141e0u: goto label_3141e0;
        case 0x314218u: goto label_314218;
        case 0x314318u: goto label_314318;
        case 0x314348u: goto label_314348;
        case 0x3143b8u: goto label_3143b8;
        case 0x314468u: goto label_314468;
        case 0x314558u: goto label_314558;
        case 0x314628u: goto label_314628;
        case 0x3146b0u: goto label_3146b0;
        case 0x314810u: goto label_314810;
        case 0x314888u: goto label_314888;
        case 0x314940u: goto label_314940;
        case 0x314aa0u: goto label_314aa0;
        case 0x314ab8u: goto label_314ab8;
        case 0x314b60u: goto label_314b60;
        case 0x314c30u: goto label_314c30;
        case 0x314d70u: goto label_314d70;
        case 0x314d88u: goto label_314d88;
        case 0x314d90u: goto label_314d90;
        case 0x314f00u: goto label_314f00;
        case 0x314f40u: goto label_314f40;
        default: break;
    }

    ctx->pc = 0x313fa0u;

label_313fa0:
    // 0x313fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313fa8: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x313fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x313fac: 0xaf83cbb4  sw          $v1, -0x344C($gp)
    ctx->pc = 0x313facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953908), GPR_U32(ctx, 3));
    // 0x313fb0: 0x9482004c  lhu         $v0, 0x4C($a0)
    ctx->pc = 0x313fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x313fb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x313fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x313fb8: 0x4a000c3e  vrinit      $R, $vf1x
    ctx->pc = 0x313fb8u;
    {
    float src = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0)));
    uint32_t seed; std::memcpy(&seed, &src, sizeof(seed));

    // PS2 uses a specific LFSR initialization pattern
    if (seed == 0) seed = 1;

    uint32_t r0 = seed;
    uint32_t r1 = seed * 0x41C64E6D + 0x3039;
    uint32_t r2 = r1 * 0x41C64E6D + 0x3039;
    uint32_t r3 = r2 * 0x41C64E6D + 0x3039;

    ctx->vu0_r = _mm_castsi128_ps(_mm_set_epi32(r3, r2, r1, r0));
}
    // 0x313fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fc4: 0x80c4ff4  j           func_313FD0
    ctx->pc = 0x313FC4u;
    ctx->pc = 0x313FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FC4u;
    // 0x313fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313FD0u;
    goto label_313fd0;
    ctx->pc = 0x313FCCu;
    // 0x313fcc: 0x0  nop
    ctx->pc = 0x313fccu;
    // NOP
label_313fd0:
    // 0x313fd0: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x313fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x313fd4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x313fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x313fd8: 0x8f82cbb4  lw          $v0, -0x344C($gp)
    ctx->pc = 0x313fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953908)));
    // 0x313fdc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x313fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x313fe0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x313fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x313fe4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x313fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x313fe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x313fec: 0x3e00008  jr          $ra
    ctx->pc = 0x313FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FECu;
        // 0x313ff0: 0xaf82cbb8  sw          $v0, -0x3448($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313FF4u;
    // 0x313ff4: 0x0  nop
    ctx->pc = 0x313ff4u;
    // NOP
label_313ff8:
    // 0x313ff8: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x313ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x313ffc: 0x8f89cbb8  lw          $t1, -0x3448($gp)
    ctx->pc = 0x313ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
    // 0x314000: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x314000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x314004: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x314004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x314008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x314008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31400c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x314010: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x314010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314014: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x314014u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x314018: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x314018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x31401c: 0x8f83cbb8  lw          $v1, -0x3448($gp)
    ctx->pc = 0x31401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
    // 0x314020: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x314020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x314024: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x314024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x314028: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x314028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31402c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x31402cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x314030: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x314030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x314034: 0x3e00008  jr          $ra
    ctx->pc = 0x314034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314034u;
        // 0x314038: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31403Cu;
    // 0x31403c: 0x0  nop
    ctx->pc = 0x31403cu;
    // NOP
label_314040:
    // 0x314040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314044: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x314044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x314048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31404c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x31404cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314050: 0x8f90cbb8  lw          $s0, -0x3448($gp)
    ctx->pc = 0x314050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
    // 0x314054: 0x8d4f003c  lw          $t7, 0x3C($t2)
    ctx->pc = 0x314054u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x314058: 0x8d4e0040  lw          $t6, 0x40($t2)
    ctx->pc = 0x314058u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x31405c: 0x19e00038  blez        $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x31405Cu;
    {
        const bool branch_taken_0x31405c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x314060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31405Cu;
        // 0x314060: 0x8d420048  lw          $v0, 0x48($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31405c) {
            ctx->pc = 0x314140u;
            goto label_314140;
        }
    }
    ctx->pc = 0x314064u;
    // 0x314064: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x314064u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314068: 0x25d9ffff  addiu       $t9, $t6, -0x1
    ctx->pc = 0x314068u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x31406c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x31406cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314070:
    // 0x314070: 0x8d420050  lw          $v0, 0x50($t2)
    ctx->pc = 0x314070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x314074: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x314074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x314078: 0x8d450054  lw          $a1, 0x54($t2)
    ctx->pc = 0x314078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x31407c: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x31407cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314080: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x314080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x314084: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x314084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x314088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31408c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31408cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x314090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314094: 0x4e00025  bltz        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x314094u;
    {
        const bool branch_taken_0x314094 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x314098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314094u;
        // 0x314098: 0x825821  addu        $t3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314094) {
            ctx->pc = 0x31412Cu;
            goto label_31412c;
        }
    }
    ctx->pc = 0x31409Cu;
    // 0x31409c: 0x3071021  addu        $v0, $t8, $a3
    ctx->pc = 0x31409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x3140a0: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3140a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3140a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3140a8: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x3140a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3140ac: 0x0  nop
    ctx->pc = 0x3140acu;
    // NOP
label_3140b0:
    // 0x3140b0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x3140b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3140b4: 0x12b2818  mult        $a1, $t1, $t3
    ctx->pc = 0x3140b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3140b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3140b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3140bc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3140bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3140c0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3140c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3140c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3140C4u;
    {
        const bool branch_taken_0x3140c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3140c4) {
            ctx->pc = 0x3140C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3140C4u;
            // 0x3140c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3140CCu;
            goto label_3140cc;
        }
    }
    ctx->pc = 0x3140CCu;
label_3140cc:
    // 0x3140cc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3140ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3140d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3140d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3140d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3140d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3140d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3140d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3140dc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3140dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3140e0: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x3140e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3140e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3140e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3140e8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x3140e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3140ec: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x3140ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3140f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3140f4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3140f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3140f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3140f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3140fc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3140fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x314100: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x314100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x314104: 0x1810  mfhi        $v1
    ctx->pc = 0x314104u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x314108: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x314108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31410c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314110: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x314110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314114: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x314114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x314118: 0x54a02  srl         $t1, $a1, 8
    ctx->pc = 0x314118u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x31411c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x314120: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x314120u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x314124: 0x4e1ffe2  bgez        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x314124u;
    {
        const bool branch_taken_0x314124 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x314128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314124u;
        // 0x314128: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314124) {
            ctx->pc = 0x3140B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3140b0;
        }
    }
    ctx->pc = 0x31412Cu;
label_31412c:
    // 0x31412c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x31412cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x314130: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x314130u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x314134: 0x1af102a  slt         $v0, $t5, $t7
    ctx->pc = 0x314134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x314138: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x314138u;
    {
        const bool branch_taken_0x314138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314138u;
        // 0x31413c: 0x30ec021  addu        $t8, $t8, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314138) {
            ctx->pc = 0x314070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314070;
        }
    }
    ctx->pc = 0x314140u;
label_314140:
    // 0x314140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x314140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314144: 0x3e00008  jr          $ra
    ctx->pc = 0x314144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314144u;
        // 0x314148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31414Cu;
    // 0x31414c: 0x0  nop
    ctx->pc = 0x31414cu;
    // NOP
label_314150:
    // 0x314150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314154: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x314154u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x314158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31415c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x314160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x314160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x314164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x314164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x314168: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x314168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x31416c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x314170: 0xc78195fc  lwc1        $f1, -0x6A04($gp)
    ctx->pc = 0x314170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314174: 0xc5e0006c  lwc1        $f0, 0x6C($t7)
    ctx->pc = 0x314174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314178: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x314178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31417c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31417cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x314180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x314184: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x314184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31418c: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x31418cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x314190: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x314190u;
    {
        const bool branch_taken_0x314190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x314194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314190u;
        // 0x314194: 0x8f94cbb8  lw          $s4, -0x3448($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314190) {
            ctx->pc = 0x3141ACu;
            goto label_3141ac;
        }
    }
    ctx->pc = 0x314198u;
    // 0x314198: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x314198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31419c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3141a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3141a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3141a4: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x3141a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x3141a8: 0x322c825  or          $t9, $t9, $v0
    ctx->pc = 0x3141a8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 2));
label_3141ac:
    // 0x3141ac: 0x8de20064  lw          $v0, 0x64($t7)
    ctx->pc = 0x3141acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 100)));
    // 0x3141b0: 0x8df8003c  lw          $t8, 0x3C($t7)
    ctx->pc = 0x3141b0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 60)));
    // 0x3141b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3141b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141b8: 0x8df20040  lw          $s2, 0x40($t7)
    ctx->pc = 0x3141b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x3141bc: 0x8df00048  lw          $s0, 0x48($t7)
    ctx->pc = 0x3141bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x3141c0: 0xc7839600  lwc1        $f3, -0x6A00($gp)
    ctx->pc = 0x3141c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3141c4: 0x95f30068  lhu         $s3, 0x68($t7)
    ctx->pc = 0x3141c4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 104)));
    // 0x3141c8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3141C8u;
    {
        const bool branch_taken_0x3141c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141C8u;
        // 0x3141cc: 0x95f1006a  lhu         $s1, 0x6A($t7) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141c8) {
            ctx->pc = 0x314308u;
            goto label_314308;
        }
    }
    ctx->pc = 0x3141D0u;
    // 0x3141d0: 0x13000071  beqz        $t8, . + 4 + (0x71 << 2)
    ctx->pc = 0x3141D0u;
    {
        const bool branch_taken_0x3141d0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141D0u;
        // 0x3141d4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141d0) {
            ctx->pc = 0x314398u;
            goto label_314398;
        }
    }
    ctx->pc = 0x3141D8u;
    // 0x3141d8: 0x264bffff  addiu       $t3, $s2, -0x1
    ctx->pc = 0x3141d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3141dc: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x3141dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3141e0:
    // 0x3141e0: 0x8de20050  lw          $v0, 0x50($t7)
    ctx->pc = 0x3141e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x3141e4: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x3141e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x3141e8: 0x8de40054  lw          $a0, 0x54($t7)
    ctx->pc = 0x3141e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 84)));
    // 0x3141ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3141ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3141f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3141f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3141f8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3141f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3141fc: 0x11a0003c  beqz        $t5, . + 4 + (0x3C << 2)
    ctx->pc = 0x3141FCu;
    {
        const bool branch_taken_0x3141fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x314200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141FCu;
        // 0x314200: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141fc) {
            ctx->pc = 0x3142F0u;
            goto label_3142f0;
        }
    }
    ctx->pc = 0x314204u;
    // 0x314204: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x314204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x314208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x314208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31420c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31420cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x314210: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x314210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x314214: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x314214u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_314218:
    // 0x314218: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x314218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31421c: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x31421cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x314220: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x314220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x314224: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x314224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x314228: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x314228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x31422c: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x31422cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x314230: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x314230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x314234: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x314234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x314238: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x314238u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x31423c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x31423cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x314240: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x314240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x314244: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x314248: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31424c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x314250: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x314250u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x314254: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x314254u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x314258: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x314258u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x31425c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x31425cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314260: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x314260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x314264: 0x79182b  sltu        $v1, $v1, $t9
    ctx->pc = 0x314264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x314268: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x314268u;
    {
        const bool branch_taken_0x314268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x314268) {
            ctx->pc = 0x31426Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314268u;
            // 0x31426c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3142E4u;
            goto label_3142e4;
        }
    }
    ctx->pc = 0x314270u;
    // 0x314270: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x314270u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x314274: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x314274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314278: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x314278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x31427c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31427cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x314280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314284: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x314284u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314288: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31428c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31428cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x314290: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x314290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x314294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x314298: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31429c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31429cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3142a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3142a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3142a4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3142a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3142a8: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x3142a8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x3142ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3142acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3142b0: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x3142b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3142b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3142b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3142b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3142b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3142bc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3142bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3142c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3142c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3142c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3142c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3142c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3142c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3142cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3142ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3142d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3142d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3142d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3142d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3142d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3142dc: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x3142dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3142e0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3142e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3142e4:
    // 0x3142e4: 0x14c102b  sltu        $v0, $t2, $t4
    ctx->pc = 0x3142e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3142e8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3142E8u;
    {
        const bool branch_taken_0x3142e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E8u;
        // 0x3142ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142e8) {
            ctx->pc = 0x314218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314218;
        }
    }
    ctx->pc = 0x3142F0u;
label_3142f0:
    // 0x3142f0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3142f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3142f4: 0x1d8102b  sltu        $v0, $t6, $t8
    ctx->pc = 0x3142f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3142f8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3142F8u;
    {
        const bool branch_taken_0x3142f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142F8u;
        // 0x3142fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142f8) {
            ctx->pc = 0x3141E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3141e0;
        }
    }
    ctx->pc = 0x314300u;
    // 0x314300: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x314300u;
    {
        const bool branch_taken_0x314300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314300u;
        // 0x314304: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314300) {
            ctx->pc = 0x31439Cu;
            goto label_31439c;
        }
    }
    ctx->pc = 0x314308u;
label_314308:
    // 0x314308: 0x13000023  beqz        $t8, . + 4 + (0x23 << 2)
    ctx->pc = 0x314308u;
    {
        const bool branch_taken_0x314308 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x31430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314308u;
        // 0x31430c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314308) {
            ctx->pc = 0x314398u;
            goto label_314398;
        }
    }
    ctx->pc = 0x314310u;
    // 0x314310: 0x264bffff  addiu       $t3, $s2, -0x1
    ctx->pc = 0x314310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x314314: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x314314u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_314318:
    // 0x314318: 0x8de20050  lw          $v0, 0x50($t7)
    ctx->pc = 0x314318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x31431c: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x314320: 0x8de40054  lw          $a0, 0x54($t7)
    ctx->pc = 0x314320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 84)));
    // 0x314324: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x314324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314328: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31432c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314330: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x314330u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314334: 0x11800014  beqz        $t4, . + 4 + (0x14 << 2)
    ctx->pc = 0x314334u;
    {
        const bool branch_taken_0x314334 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x314338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314334u;
        // 0x314338: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314334) {
            ctx->pc = 0x314388u;
            goto label_314388;
        }
    }
    ctx->pc = 0x31433Cu;
    // 0x31433c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x31433cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314344: 0x0  nop
    ctx->pc = 0x314344u;
    // NOP
label_314348:
    // 0x314348: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x314348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31434c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x314350: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x314350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x314354: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x314354u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x314358: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x314358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31435c: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x31435cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x314360: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x314360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x314364: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x314364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x314368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31436c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x31436cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x314370: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x314370u;
    {
        const bool branch_taken_0x314370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x314374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314370u;
        // 0x314374: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314370) {
            ctx->pc = 0x314348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314348;
        }
    }
    ctx->pc = 0x314378u;
    // 0x314378: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x314378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31437c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x31437cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x314380: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x314380u;
    {
        const bool branch_taken_0x314380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314380) {
            ctx->pc = 0x314384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314380u;
            // 0x314384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314348;
        }
    }
    ctx->pc = 0x314388u;
label_314388:
    // 0x314388: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x314388u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31438c: 0x1d8102b  sltu        $v0, $t6, $t8
    ctx->pc = 0x31438cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x314390: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x314390u;
    {
        const bool branch_taken_0x314390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314390u;
        // 0x314394: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314390) {
            ctx->pc = 0x314318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314318;
        }
    }
    ctx->pc = 0x314398u;
label_314398:
    // 0x314398: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x314398u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31439c:
    // 0x31439c: 0x53000026  beql        $t8, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x31439Cu;
    {
        const bool branch_taken_0x31439c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x31439c) {
            ctx->pc = 0x3143A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31439Cu;
            // 0x3143a0: 0x8de30064  lw          $v1, 0x64($t7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314438u;
            goto label_314438;
        }
    }
    ctx->pc = 0x3143A4u;
    // 0x3143a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3143a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3143a8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3143a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143ac: 0x546821  addu        $t5, $v0, $s4
    ctx->pc = 0x3143acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3143b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3143b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143b4: 0x0  nop
    ctx->pc = 0x3143b4u;
    // NOP
label_3143b8:
    // 0x3143b8: 0x8d4c0010  lw          $t4, 0x10($t2)
    ctx->pc = 0x3143b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3143bc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3143bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3143c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3143c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3143c4: 0x1d8482b  sltu        $t1, $t6, $t8
    ctx->pc = 0x3143c4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3143c8: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x3143c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x3143cc: 0x8d4b0014  lw          $t3, 0x14($t2)
    ctx->pc = 0x3143ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x3143d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3143d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3143d4: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x3143d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3143d8: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x3143d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3143dc: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x3143dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3143e0: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x3143e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3143e4: 0xb2840  sll         $a1, $t3, 1
    ctx->pc = 0x3143e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3143e8: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x3143e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3143ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3143ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3143f0: 0xa5a7fffc  sh          $a3, -0x4($t5)
    ctx->pc = 0x3143f0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294967292), (uint16_t)GPR_U32(ctx, 7));
    // 0x3143f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3143f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3143f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3143f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3143fc: 0x25880001  addiu       $t0, $t4, 0x1
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x314400: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x314400u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314404: 0x184202b  sltu        $a0, $t4, $a0
    ctx->pc = 0x314404u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x314408: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x314408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31440c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31440cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314410: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x314410u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314414: 0x43580b  movn        $t3, $v0, $v1
    ctx->pc = 0x314414u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
    // 0x314418: 0x104600b  movn        $t4, $t0, $a0
    ctx->pc = 0x314418u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 8));
    // 0x31441c: 0xa5a6fffe  sh          $a2, -0x2($t5)
    ctx->pc = 0x31441cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294967294), (uint16_t)GPR_U32(ctx, 6));
    // 0x314420: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x314420u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
    // 0x314424: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x314424u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x314428: 0xad4b0014  sw          $t3, 0x14($t2)
    ctx->pc = 0x314428u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 11));
    // 0x31442c: 0x1520ffe2  bnez        $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x31442Cu;
    {
        const bool branch_taken_0x31442c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x314430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31442Cu;
        // 0x314430: 0x254a0018  addiu       $t2, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31442c) {
            ctx->pc = 0x3143B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3143b8;
        }
    }
    ctx->pc = 0x314434u;
    // 0x314434: 0x8de30064  lw          $v1, 0x64($t7)
    ctx->pc = 0x314434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 100)));
label_314438:
    // 0x314438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31443c: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x31443Cu;
    {
        const bool branch_taken_0x31443c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31443c) {
            ctx->pc = 0x314440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31443Cu;
            // 0x314440: 0x8de30060  lw          $v1, 0x60($t7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314510u;
            goto label_314510;
        }
    }
    ctx->pc = 0x314444u;
    // 0x314444: 0x13000030  beqz        $t8, . + 4 + (0x30 << 2)
    ctx->pc = 0x314444u;
    {
        const bool branch_taken_0x314444 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x314448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314444u;
        // 0x314448: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314444) {
            ctx->pc = 0x314508u;
            goto label_314508;
        }
    }
    ctx->pc = 0x31444Cu;
    // 0x31444c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x31444cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x314450: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x314450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x314454: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x314454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x314458: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x314458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31445c: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x31445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x314460: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x314460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314464: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x314464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_314468:
    // 0x314468: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x314468u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x31446c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x31446cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314470: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x314470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x314474: 0x79182b  sltu        $v1, $v1, $t9
    ctx->pc = 0x314474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x314478: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x314478u;
    {
        const bool branch_taken_0x314478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x314478) {
            ctx->pc = 0x31447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314478u;
            // 0x31447c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144FCu;
            goto label_3144fc;
        }
    }
    ctx->pc = 0x314480u;
    // 0x314480: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x314480u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x314484: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x314484u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314488: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x314488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x31448c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31448cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x314490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314494: 0x94a4fffc  lhu         $a0, -0x4($a1)
    ctx->pc = 0x314494u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x314498: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x314498u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31449c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31449cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3144a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3144a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3144a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3144a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3144a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3144a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3144ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3144acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3144b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3144b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3144b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3144b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3144b8: 0xa4a4fffc  sh          $a0, -0x4($a1)
    ctx->pc = 0x3144b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 4));
    // 0x3144bc: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x3144bcu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x3144c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3144c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3144c4: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x3144c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3144c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3144c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3144cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3144ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3144d0: 0x94a4fffe  lhu         $a0, -0x2($a1)
    ctx->pc = 0x3144d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3144d4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3144d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3144d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3144d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3144dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3144dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3144e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3144e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3144e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3144e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3144e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3144e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3144ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3144ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3144f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3144f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3144f4: 0xa4a4fffe  sh          $a0, -0x2($a1)
    ctx->pc = 0x3144f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967294), (uint16_t)GPR_U32(ctx, 4));
    // 0x3144f8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3144f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_3144fc:
    // 0x3144fc: 0x1d8102b  sltu        $v0, $t6, $t8
    ctx->pc = 0x3144fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x314500: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x314500u;
    {
        const bool branch_taken_0x314500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314500u;
        // 0x314504: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314500) {
            ctx->pc = 0x314468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314468;
        }
    }
    ctx->pc = 0x314508u;
label_314508:
    // 0x314508: 0x8de30060  lw          $v1, 0x60($t7)
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 96)));
    // 0x31450c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314510:
    // 0x314510: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x314510u;
    {
        const bool branch_taken_0x314510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314510u;
        // 0x314514: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314510) {
            ctx->pc = 0x314538u;
            goto label_314538;
        }
    }
    ctx->pc = 0x314518u;
    // 0x314518: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x314518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31451c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31451cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x314520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x314520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314524: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x314524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x314528: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x314528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31452c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x314530: 0x80c5280  j           func_314A00
    ctx->pc = 0x314530u;
    ctx->pc = 0x314534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314530u;
    // 0x314534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A00u;
    goto label_314a00;
    ctx->pc = 0x314538u;
label_314538:
    // 0x314538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x314538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31453c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31453cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314540: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x314540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x314544: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x314544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314548: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x314548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31454c: 0x3e00008  jr          $ra
    ctx->pc = 0x31454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31454Cu;
        // 0x314550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314554u;
    // 0x314554: 0x0  nop
    ctx->pc = 0x314554u;
    // NOP
label_314558:
    // 0x314558: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x314558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31455c: 0xc7819604  lwc1        $f1, -0x69FC($gp)
    ctx->pc = 0x31455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314560: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x314560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x314564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314568: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x314568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31456c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x314570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x314570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x314574: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x314574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x314578: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x314578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31457c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x314580: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x314580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x314584: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x314584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x314588: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x314588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31458c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x314590: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x314590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x314594: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x314594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31459c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x31459cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3145a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3145a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3145a4: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3145a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3145a8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3145A8u;
    {
        const bool branch_taken_0x3145a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3145a8) {
            ctx->pc = 0x3145ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145A8u;
            // 0x3145ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3145C8u;
            goto label_3145c8;
        }
    }
    ctx->pc = 0x3145B0u;
    // 0x3145b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3145b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3145b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3145b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3145b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3145bc: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3145bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3145c0: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x3145c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x3145c4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3145c8:
    // 0x3145c8: 0xc7839608  lwc1        $f3, -0x69F8($gp)
    ctx->pc = 0x3145c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3145cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3145ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3145d0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3145d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3145d4: 0x8f82cbb8  lw          $v0, -0x3448($gp)
    ctx->pc = 0x3145d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
    // 0x3145d8: 0x8e140040  lw          $s4, 0x40($s0)
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3145dc: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3145e0: 0xb42018  mult        $a0, $a1, $s4
    ctx->pc = 0x3145e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3145e4: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3145e8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3145ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3145ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3145f0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3145f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3145f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3145f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3145f8: 0x96170068  lhu         $s7, 0x68($s0)
    ctx->pc = 0x3145f8u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3145fc: 0x244bfffe  addiu       $t3, $v0, -0x2
    ctx->pc = 0x3145fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x314600: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
    ctx->pc = 0x314600u;
    {
        const bool branch_taken_0x314600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314600u;
        // 0x314604: 0x9616006a  lhu         $s6, 0x6A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314600) {
            ctx->pc = 0x3147F0u;
            goto label_3147f0;
        }
    }
    ctx->pc = 0x314608u;
    // 0x314608: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x314608u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31460c: 0x70000c7  bltz        $t8, . + 4 + (0xC7 << 2)
    ctx->pc = 0x31460Cu;
    {
        const bool branch_taken_0x31460c = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x314610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31460Cu;
        // 0x314610: 0x181040  sll         $v0, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31460c) {
            ctx->pc = 0x31492Cu;
            goto label_31492c;
        }
    }
    ctx->pc = 0x314614u;
    // 0x314614: 0x269effff  addiu       $fp, $s4, -0x1
    ctx->pc = 0x314614u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314618: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x314618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x31461c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x314620: 0x466021  addu        $t4, $v0, $a2
    ctx->pc = 0x314620u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x314624: 0x0  nop
    ctx->pc = 0x314624u;
    // NOP
label_314628:
    // 0x314628: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x314628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x31462c: 0x182880  sll         $a1, $t8, 2
    ctx->pc = 0x31462cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x314630: 0x8d870014  lw          $a3, 0x14($t4)
    ctx->pc = 0x314630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x314634: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x314634u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314638: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x31463c: 0x8d8e0008  lw          $t6, 0x8($t4)
    ctx->pc = 0x31463cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x314640: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x314640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x314644: 0x8d8d000c  lw          $t5, 0xC($t4)
    ctx->pc = 0x314644u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x314648: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x314648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31464c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x314650: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x314650u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x314654: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x314654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x314658: 0x704d001b  divu1       $zero, $v0, $t5
    ctx->pc = 0x314658u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31465c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31465Cu;
    {
        const bool branch_taken_0x31465c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x31465c) {
            ctx->pc = 0x314660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31465Cu;
            // 0x314660: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x314664u;
            goto label_314664;
        }
    }
    ctx->pc = 0x314664u;
label_314664:
    // 0x314664: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x314668: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x314668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31466c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314670: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x314670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x314674: 0x24190100  addiu       $t9, $zero, 0x100
    ctx->pc = 0x314674u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x314678: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x314678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31467c: 0x8d930000  lw          $s3, 0x0($t4)
    ctx->pc = 0x31467cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x314680: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x314684: 0x8d910004  lw          $s1, 0x4($t4)
    ctx->pc = 0x314684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x314688: 0x3010  mfhi        $a2
    ctx->pc = 0x314688u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x31468c: 0x70003810  mfhi1       $a3
    ctx->pc = 0x31468cu;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x314690: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x314690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314694: 0x5e00050  bltz        $t7, . + 4 + (0x50 << 2)
    ctx->pc = 0x314694u;
    {
        const bool branch_taken_0x314694 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x314698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314694u;
        // 0x314698: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314694) {
            ctx->pc = 0x3147D8u;
            goto label_3147d8;
        }
    }
    ctx->pc = 0x31469Cu;
    // 0x31469c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x31469cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x3146a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3146a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3146a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3146a8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3146a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3146ac: 0x0  nop
    ctx->pc = 0x3146acu;
    // NOP
label_3146b0:
    // 0x3146b0: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x3146b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3146b4: 0xa2840  sll         $a1, $t2, 1
    ctx->pc = 0x3146b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3146b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3146b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3146bc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3146c0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3146c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3146c4: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3146c8: 0x591018  mult        $v0, $v0, $t9
    ctx->pc = 0x3146c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3146cc: 0x70992018  mult1       $a0, $a0, $t9
    ctx->pc = 0x3146ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3146d0: 0x244700ff  addiu       $a3, $v0, 0xFF
    ctx->pc = 0x3146d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x3146d4: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x3146d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3146d8: 0x248600ff  addiu       $a2, $a0, 0xFF
    ctx->pc = 0x3146d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x3146dc: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x3146dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3146e0: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x3146e0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x3146e4: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x3146e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x3146e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3146e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3146ec: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3146ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3146f0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x3146f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3146f4: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3146f8: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x3146f8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x3146fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3146fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314700: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x314700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x314704: 0x75182b  sltu        $v1, $v1, $s5
    ctx->pc = 0x314704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x314708: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x314708u;
    {
        const bool branch_taken_0x314708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314708u;
        // 0x31470c: 0x3321018  mult        $v0, $t9, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314708) {
            ctx->pc = 0x31478Cu;
            goto label_31478c;
        }
    }
    ctx->pc = 0x314710u;
    // 0x314710: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x314710u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x314714: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x314714u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314718: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x314718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x31471c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31471cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x314720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314724: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x314724u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31472c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31472cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x314730: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x314730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x314734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x314738: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31473c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31473cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314740: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x314740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x314744: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x314744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x314748: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x314748u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x31474c: 0x4b01043c  vrnext.x    $vf1, $R
    ctx->pc = 0x31474cu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x314750: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x314750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314754: 0x482024  and         $a0, $v0, $t0
    ctx->pc = 0x314754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x314758: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x314758u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31475c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31475cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314760: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x314760u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314768: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x314768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31476c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31476cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x314770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x314774: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314778: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x314778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31477c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x314780: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x314780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x314784: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x314784u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x314788: 0x3321018  mult        $v0, $t9, $s2
    ctx->pc = 0x314788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31478c:
    // 0x31478c: 0xa5650000  sh          $a1, 0x0($t3)
    ctx->pc = 0x31478cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x314790: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x314790u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x314794: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x314794u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x314798: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x314798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x31479c: 0x1d400004  bgtz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31479Cu;
    {
        const bool branch_taken_0x31479c = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31479Cu;
        // 0x3147a0: 0x2ca02  srl         $t9, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31479c) {
            ctx->pc = 0x3147B0u;
            goto label_3147b0;
        }
    }
    ctx->pc = 0x3147A4u;
    // 0x3147a4: 0x14e1021  addu        $v0, $t2, $t6
    ctx->pc = 0x3147a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x3147a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3147A8u;
    {
        const bool branch_taken_0x3147a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147A8u;
        // 0x3147ac: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147a8) {
            ctx->pc = 0x3147B4u;
            goto label_3147b4;
        }
    }
    ctx->pc = 0x3147B0u;
label_3147b0:
    // 0x3147b0: 0x2546ffff  addiu       $a2, $t2, -0x1
    ctx->pc = 0x3147b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_3147b4:
    // 0x3147b4: 0x1d200004  bgtz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3147B4u;
    {
        const bool branch_taken_0x3147b4 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x3147B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147B4u;
        // 0x3147b8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147b4) {
            ctx->pc = 0x3147C8u;
            goto label_3147c8;
        }
    }
    ctx->pc = 0x3147BCu;
    // 0x3147bc: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x3147bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x3147c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3147C0u;
    {
        const bool branch_taken_0x3147c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147C0u;
        // 0x3147c4: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147c0) {
            ctx->pc = 0x3147CCu;
            goto label_3147cc;
        }
    }
    ctx->pc = 0x3147C8u;
label_3147c8:
    // 0x3147c8: 0x2527ffff  addiu       $a3, $t1, -0x1
    ctx->pc = 0x3147c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3147cc:
    // 0x3147cc: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x3147ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3147d0: 0x5e1ffb7  bgez        $t7, . + 4 + (-0x49 << 2)
    ctx->pc = 0x3147D0u;
    {
        const bool branch_taken_0x3147d0 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x3147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D0u;
        // 0x3147d4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147d0) {
            ctx->pc = 0x3146B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3146b0;
        }
    }
    ctx->pc = 0x3147D8u;
label_3147d8:
    // 0x3147d8: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x3147d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x3147dc: 0x701ff92  bgez        $t8, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3147DCu;
    {
        const bool branch_taken_0x3147dc = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x3147E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147DCu;
        // 0x3147e0: 0x258cffe8  addiu       $t4, $t4, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147dc) {
            ctx->pc = 0x314628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314628;
        }
    }
    ctx->pc = 0x3147E4u;
    // 0x3147e4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3147E4u;
    {
        const bool branch_taken_0x3147e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147E4u;
        // 0x3147e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147e4) {
            ctx->pc = 0x314930u;
            goto label_314930;
        }
    }
    ctx->pc = 0x3147ECu;
    // 0x3147ec: 0x0  nop
    ctx->pc = 0x3147ecu;
    // NOP
label_3147f0:
    // 0x3147f0: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3147f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147f4: 0x700004d  bltz        $t8, . + 4 + (0x4D << 2)
    ctx->pc = 0x3147F4u;
    {
        const bool branch_taken_0x3147f4 = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x3147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147F4u;
        // 0x3147f8: 0x181040  sll         $v0, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147f4) {
            ctx->pc = 0x31492Cu;
            goto label_31492c;
        }
    }
    ctx->pc = 0x3147FCu;
    // 0x3147fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x314800: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x314800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x314804: 0x269effff  addiu       $fp, $s4, -0x1
    ctx->pc = 0x314804u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314808: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x314808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31480c: 0x436021  addu        $t4, $v0, $v1
    ctx->pc = 0x31480cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_314810:
    // 0x314810: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x314814: 0x182880  sll         $a1, $t8, 2
    ctx->pc = 0x314814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x314818: 0x8d870014  lw          $a3, 0x14($t4)
    ctx->pc = 0x314818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x31481c: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x31481cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314820: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x314820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x314824: 0x8d8e0008  lw          $t6, 0x8($t4)
    ctx->pc = 0x314824u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x314828: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x314828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x31482c: 0x8d8d000c  lw          $t5, 0xC($t4)
    ctx->pc = 0x31482cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x314830: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x314830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x314834: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x314838: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x314838u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31483c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x31483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x314840: 0x704d001b  divu1       $zero, $v0, $t5
    ctx->pc = 0x314840u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x314844: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x314844u;
    {
        const bool branch_taken_0x314844 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x314844) {
            ctx->pc = 0x314848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314844u;
            // 0x314848: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31484Cu;
            goto label_31484c;
        }
    }
    ctx->pc = 0x31484Cu;
label_31484c:
    // 0x31484c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x31484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x314850: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x314854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x314854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314858: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x314858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31485c: 0x24190100  addiu       $t9, $zero, 0x100
    ctx->pc = 0x31485cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x314860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314864: 0x8d930000  lw          $s3, 0x0($t4)
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x314868: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x314868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31486c: 0x8d910004  lw          $s1, 0x4($t4)
    ctx->pc = 0x31486cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x314870: 0x3010  mfhi        $a2
    ctx->pc = 0x314870u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x314874: 0x70003810  mfhi1       $a3
    ctx->pc = 0x314874u;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x314878: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x314878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31487c: 0x5e00028  bltz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x31487Cu;
    {
        const bool branch_taken_0x31487c = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x314880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31487Cu;
        // 0x314880: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31487c) {
            ctx->pc = 0x314920u;
            goto label_314920;
        }
    }
    ctx->pc = 0x314884u;
    // 0x314884: 0x0  nop
    ctx->pc = 0x314884u;
    // NOP
label_314888:
    // 0x314888: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x314888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x31488c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x31488cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314890: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x314890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x314894: 0xa2840  sll         $a1, $t2, 1
    ctx->pc = 0x314894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x314898: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x314898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31489c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3148a0: 0x3323018  mult        $a2, $t9, $s2
    ctx->pc = 0x3148a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3148a4: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x3148a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x3148a8: 0x791818  mult        $v1, $v1, $t9
    ctx->pc = 0x3148a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3148ac: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x3148acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3148b0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x3148b4: 0x246400ff  addiu       $a0, $v1, 0xFF
    ctx->pc = 0x3148b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x3148b8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x3148b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3148bc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3148bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3148c0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3148c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3148c4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3148c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3148c8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3148cc: 0x591018  mult        $v0, $v0, $t9
    ctx->pc = 0x3148ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3148d0: 0x6ca02  srl         $t9, $a2, 8
    ctx->pc = 0x3148d0u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x3148d4: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x3148d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x3148d8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3148d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3148dc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3148dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3148e0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3148e4: 0x1d400004  bgtz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3148E4u;
    {
        const bool branch_taken_0x3148e4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3148E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148E4u;
        // 0x3148e8: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148e4) {
            ctx->pc = 0x3148F8u;
            goto label_3148f8;
        }
    }
    ctx->pc = 0x3148ECu;
    // 0x3148ec: 0x14e1021  addu        $v0, $t2, $t6
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x3148f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3148F0u;
    {
        const bool branch_taken_0x3148f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148F0u;
        // 0x3148f4: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148f0) {
            ctx->pc = 0x3148FCu;
            goto label_3148fc;
        }
    }
    ctx->pc = 0x3148F8u;
label_3148f8:
    // 0x3148f8: 0x2546ffff  addiu       $a2, $t2, -0x1
    ctx->pc = 0x3148f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_3148fc:
    // 0x3148fc: 0x1d200004  bgtz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3148FCu;
    {
        const bool branch_taken_0x3148fc = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x314900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148FCu;
        // 0x314900: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148fc) {
            ctx->pc = 0x314910u;
            goto label_314910;
        }
    }
    ctx->pc = 0x314904u;
    // 0x314904: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x314904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x314908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x314908u;
    {
        const bool branch_taken_0x314908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314908u;
        // 0x31490c: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314908) {
            ctx->pc = 0x314914u;
            goto label_314914;
        }
    }
    ctx->pc = 0x314910u;
label_314910:
    // 0x314910: 0x2527ffff  addiu       $a3, $t1, -0x1
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_314914:
    // 0x314914: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x314914u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x314918: 0x5e1ffdb  bgez        $t7, . + 4 + (-0x25 << 2)
    ctx->pc = 0x314918u;
    {
        const bool branch_taken_0x314918 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x31491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314918u;
        // 0x31491c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314918) {
            ctx->pc = 0x314888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314888;
        }
    }
    ctx->pc = 0x314920u;
label_314920:
    // 0x314920: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x314920u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x314924: 0x701ffba  bgez        $t8, . + 4 + (-0x46 << 2)
    ctx->pc = 0x314924u;
    {
        const bool branch_taken_0x314924 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x314928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314924u;
        // 0x314928: 0x258cffe8  addiu       $t4, $t4, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314924) {
            ctx->pc = 0x314810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314810;
        }
    }
    ctx->pc = 0x31492Cu;
label_31492c:
    // 0x31492c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_314930:
    // 0x314930: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x314930u;
    {
        const bool branch_taken_0x314930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x314930) {
            ctx->pc = 0x314934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314930u;
            // 0x314934: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314990u;
            goto label_314990;
        }
    }
    ctx->pc = 0x314938u;
    // 0x314938: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x314938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31493c: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x31493cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314940:
    // 0x314940: 0x8d0e0008  lw          $t6, 0x8($t0)
    ctx->pc = 0x314940u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x314944: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x314944u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x314948: 0x8d0d000c  lw          $t5, 0xC($t0)
    ctx->pc = 0x314948u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x31494c: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x314950: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x314950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x314954: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x314954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x314958: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x314958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x31495c: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x31495cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x314960: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x314964: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x314964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x314968: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x314968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31496c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31496cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314970: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x314970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314974: 0xa4300b  movn        $a2, $a1, $a0
    ctx->pc = 0x314974u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x314978: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x314978u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x31497c: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x31497cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x314980: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x314980u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x314984: 0x1700ffee  bnez        $t8, . + 4 + (-0x12 << 2)
    ctx->pc = 0x314984u;
    {
        const bool branch_taken_0x314984 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x314988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314984u;
        // 0x314988: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314984) {
            ctx->pc = 0x314940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314940;
        }
    }
    ctx->pc = 0x31498Cu;
    // 0x31498c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x31498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_314990:
    // 0x314990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314994: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x314994u;
    {
        const bool branch_taken_0x314994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x314994) {
            ctx->pc = 0x314998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314994u;
            // 0x314998: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3149D0u;
            goto label_3149d0;
        }
    }
    ctx->pc = 0x31499Cu;
    // 0x31499c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3149a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3149a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3149a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3149a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3149a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3149ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3149acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3149b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3149b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3149b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3149b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3149b8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3149b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3149bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3149bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3149c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3149c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3149c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3149c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3149c8: 0x80c5280  j           func_314A00
    ctx->pc = 0x3149C8u;
    ctx->pc = 0x3149CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149C8u;
    // 0x3149cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A00u;
    goto label_314a00;
    ctx->pc = 0x3149D0u;
label_3149d0:
    // 0x3149d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3149d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3149d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3149d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3149d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3149d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3149dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3149dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3149e0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3149e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3149e4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3149e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3149e8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3149e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3149ec: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3149ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3149f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3149f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3149F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149F4u;
        // 0x3149f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3149FCu;
    // 0x3149fc: 0x0  nop
    ctx->pc = 0x3149fcu;
    // NOP
label_314a00:
    // 0x314a00: 0x9082004e  lbu         $v0, 0x4E($a0)
    ctx->pc = 0x314a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x314a04: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x314a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314a08: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x314a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x314a0c: 0x2406fe00  addiu       $a2, $zero, -0x200
    ctx->pc = 0x314a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x314a10: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x314a10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x314a14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x314A14u;
    {
        const bool branch_taken_0x314a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314a14) {
            ctx->pc = 0x314A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314A14u;
            // 0x314a18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x314A1Cu;
            goto label_314a1c;
        }
    }
    ctx->pc = 0x314A1Cu;
label_314a1c:
    // 0x314a1c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x314a1cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a20: 0x8c8e0040  lw          $t6, 0x40($a0)
    ctx->pc = 0x314a20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x314a24: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x314a24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x314a28: 0x2812  mflo        $a1
    ctx->pc = 0x314a28u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x314a2c: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x314a2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x314a30: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x314a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x314a34: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x314a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x314a38: 0x3012  mflo        $a2
    ctx->pc = 0x314a38u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x314a3c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x314A3Cu;
    {
        const bool branch_taken_0x314a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A3Cu;
        // 0x314a40: 0x8f99cbb8  lw          $t9, -0x3448($gp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a3c) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A44u;
    // 0x314a44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x314a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x314a48: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x314a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x314a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x314a50: 0x8c632ba0  lw          $v1, 0x2BA0($v1)
    ctx->pc = 0x314a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11168)));
    // 0x314a54: 0x600008  jr          $v1
    ctx->pc = 0x314A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x314A60u: goto label_314a60;
            case 0x314A68u: goto label_314a68;
            case 0x314A70u: goto label_314a70;
            case 0x314A78u: goto label_314a78;
            case 0x314A80u: goto label_314a80;
            case 0x314A88u: goto label_314a88;
            case 0x314A90u: goto label_314a90;
            case 0x314A94u: goto label_314a94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x314A5Cu;
    // 0x314a5c: 0x0  nop
    ctx->pc = 0x314a5cu;
    // NOP
label_314a60:
    // 0x314a60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x314A60u;
    {
        const bool branch_taken_0x314a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A60u;
        // 0x314a64: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a60) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A68u;
label_314a68:
    // 0x314a68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x314A68u;
    {
        const bool branch_taken_0x314a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A68u;
        // 0x314a6c: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a68) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A70u;
label_314a70:
    // 0x314a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x314A70u;
    {
        const bool branch_taken_0x314a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A70u;
        // 0x314a74: 0x24180002  addiu       $t8, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a70) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A78u;
label_314a78:
    // 0x314a78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x314A78u;
    {
        const bool branch_taken_0x314a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A78u;
        // 0x314a7c: 0x24180003  addiu       $t8, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a78) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A80u;
label_314a80:
    // 0x314a80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314A80u;
    {
        const bool branch_taken_0x314a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A80u;
        // 0x314a84: 0x24180004  addiu       $t8, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a80) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A88u;
label_314a88:
    // 0x314a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x314A88u;
    {
        const bool branch_taken_0x314a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A88u;
        // 0x314a8c: 0x24180005  addiu       $t8, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a88) {
            ctx->pc = 0x314A94u;
            goto label_314a94;
        }
    }
    ctx->pc = 0x314A90u;
label_314a90:
    // 0x314a90: 0x24180006  addiu       $t8, $zero, 0x6
    ctx->pc = 0x314a90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_314a94:
    // 0x314a94: 0x19c0002f  blez        $t6, . + 4 + (0x2F << 2)
    ctx->pc = 0x314A94u;
    {
        const bool branch_taken_0x314a94 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x314A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A94u;
        // 0x314a98: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a94) {
            ctx->pc = 0x314B54u;
            goto label_314b54;
        }
    }
    ctx->pc = 0x314A9Cu;
    // 0x314a9c: 0x0  nop
    ctx->pc = 0x314a9cu;
    // NOP
label_314aa0:
    // 0x314aa0: 0x19e00028  blez        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x314AA0u;
    {
        const bool branch_taken_0x314aa0 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x314AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AA0u;
        // 0x314aa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314aa0) {
            ctx->pc = 0x314B44u;
            goto label_314b44;
        }
    }
    ctx->pc = 0x314AA8u;
    // 0x314aa8: 0x3c0bfffe  lui         $t3, 0xFFFE
    ctx->pc = 0x314aa8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65534 << 16));
    // 0x314aac: 0x66c00  sll         $t5, $a2, 16
    ctx->pc = 0x314aacu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x314ab0: 0x356b0001  ori         $t3, $t3, 0x1
    ctx->pc = 0x314ab0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x314ab4: 0x0  nop
    ctx->pc = 0x314ab4u;
    // NOP
label_314ab8:
    // 0x314ab8: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x314ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x314abc: 0x3083804  sllv        $a3, $t0, $t8
    ctx->pc = 0x314abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 24) & 0x1F));
    // 0x314ac0: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x314ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x314ac4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x314ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x314ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x314ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x314acc: 0x3224821  addu        $t1, $t9, $v0
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x314ad0: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x314ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x314ad4: 0x252a0002  addiu       $t2, $t1, 0x2
    ctx->pc = 0x314ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x314ad8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x314ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x314adc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314ADCu;
    {
        const bool branch_taken_0x314adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314ADCu;
        // 0x314ae0: 0x85450000  lh          $a1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314adc) {
            ctx->pc = 0x314AF0u;
            goto label_314af0;
        }
    }
    ctx->pc = 0x314AE4u;
    // 0x314ae4: 0x71500  sll         $v0, $a3, 20
    ctx->pc = 0x314ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x314ae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x314AE8u;
    {
        const bool branch_taken_0x314ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AE8u;
        // 0x314aec: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ae8) {
            ctx->pc = 0x314B10u;
            goto label_314b10;
        }
    }
    ctx->pc = 0x314AF0u;
label_314af0:
    // 0x314af0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x314af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x314af4: 0x3071804  sllv        $v1, $a3, $t8
    ctx->pc = 0x314af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 24) & 0x1F));
    // 0x314af8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x314af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x314afc: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x314afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x314b00: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x314b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x314b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314B04u;
    {
        const bool branch_taken_0x314b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B04u;
        // 0x314b08: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b04) {
            ctx->pc = 0x314B14u;
            goto label_314b14;
        }
    }
    ctx->pc = 0x314B0Cu;
    // 0x314b0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x314b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_314b10:
    // 0x314b10: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x314b10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_314b14:
    // 0x314b14: 0x58a00004  blezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314B14u;
    {
        const bool branch_taken_0x314b14 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x314b14) {
            ctx->pc = 0x314B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B14u;
            // 0x314b18: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x314B28u;
            goto label_314b28;
        }
    }
    ctx->pc = 0x314B1Cu;
    // 0x314b1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314B1Cu;
    {
        const bool branch_taken_0x314b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B1Cu;
        // 0x314b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b1c) {
            ctx->pc = 0x314B30u;
            goto label_314b30;
        }
    }
    ctx->pc = 0x314B24u;
    // 0x314b24: 0x0  nop
    ctx->pc = 0x314b24u;
    // NOP
label_314b28:
    // 0x314b28: 0xd1403  sra         $v0, $t5, 16
    ctx->pc = 0x314b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 13), 16));
    // 0x314b2c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x314b2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_314b30:
    // 0x314b30: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x314b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b34: 0xa5240000  sh          $a0, 0x0($t1)
    ctx->pc = 0x314b34u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x314b38: 0x10f102a  slt         $v0, $t0, $t7
    ctx->pc = 0x314b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x314b3c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x314B3Cu;
    {
        const bool branch_taken_0x314b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B3Cu;
        // 0x314b40: 0xa5450000  sh          $a1, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b3c) {
            ctx->pc = 0x314AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ab8;
        }
    }
    ctx->pc = 0x314B44u;
label_314b44:
    // 0x314b44: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x314b44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x314b48: 0x18e102a  slt         $v0, $t4, $t6
    ctx->pc = 0x314b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x314b4c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x314B4Cu;
    {
        const bool branch_taken_0x314b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b4c) {
            ctx->pc = 0x314AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314aa0;
        }
    }
    ctx->pc = 0x314B54u;
label_314b54:
    // 0x314b54: 0x3e00008  jr          $ra
    ctx->pc = 0x314B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B5Cu;
    // 0x314b5c: 0x0  nop
    ctx->pc = 0x314b5cu;
    // NOP
label_314b60:
    // 0x314b60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x314b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x314b64: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x314b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x314b68: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x314b68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b6c: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x314b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x314b70: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x314b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x314b74: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x314b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x314b78: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x314b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x314b7c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x314b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x314b80: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x314b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x314b84: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x314b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x314b88: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x314b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x314b8c: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x314b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x314b90: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x314b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x314b94: 0x8fd2003c  lw          $s2, 0x3C($fp)
    ctx->pc = 0x314b94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x314b98: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x314b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x314b9c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x314ba0: 0x8fce0000  lw          $t6, 0x0($fp)
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x314ba4: 0x8fca0008  lw          $t2, 0x8($fp)
    ctx->pc = 0x314ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x314ba8: 0x8fc9000c  lw          $t1, 0xC($fp)
    ctx->pc = 0x314ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x314bac: 0x8fd70004  lw          $s7, 0x4($fp)
    ctx->pc = 0x314bacu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x314bb0: 0x8fd60010  lw          $s6, 0x10($fp)
    ctx->pc = 0x314bb0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x314bb4: 0x8fd30014  lw          $s3, 0x14($fp)
    ctx->pc = 0x314bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x314bb8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x314bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x314bbc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x314bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x314bc0: 0x16b6b8  dsll        $s6, $s6, 26
    ctx->pc = 0x314bc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 26);
    // 0x314bc4: 0x139fb8  dsll        $s3, $s3, 30
    ctx->pc = 0x314bc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 30);
    // 0x314bc8: 0x17b8bc  dsll32      $s7, $s7, 2
    ctx->pc = 0x314bc8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 2));
    // 0x314bcc: 0x8fc50034  lw          $a1, 0x34($fp)
    ctx->pc = 0x314bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x314bd0: 0x2769825  or          $s3, $s3, $s6
    ctx->pc = 0x314bd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 22));
    // 0x314bd4: 0x8fd10020  lw          $s1, 0x20($fp)
    ctx->pc = 0x314bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x314bd8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x314bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x314bdc: 0x118bb8  dsll        $s1, $s1, 14
    ctx->pc = 0x314bdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 14);
    // 0x314be0: 0x8fcf00c4  lw          $t7, 0xC4($fp)
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x314be4: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x314be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x314be8: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x314be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x314bec: 0x8fcd00c8  lw          $t5, 0xC8($fp)
    ctx->pc = 0x314becu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 200)));
    // 0x314bf0: 0x8fd400b8  lw          $s4, 0xB8($fp)
    ctx->pc = 0x314bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x314bf4: 0x8fd500bc  lw          $s5, 0xBC($fp)
    ctx->pc = 0x314bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x314bf8: 0x8fd000c0  lw          $s0, 0xC0($fp)
    ctx->pc = 0x314bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
    // 0x314bfc: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x314bfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x314c00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x314c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x314c04: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x314c04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x314c08: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x314c08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x314c0c: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x314c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x314c10: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x314c10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x314c14: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x314c14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x314c18: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x314c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x314c1c: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x314c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
    // 0x314c20: 0x7faa00b0  sq          $t2, 0xB0($sp)
    ctx->pc = 0x314c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 10));
    // 0x314c24: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x314c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x314c28: 0xc0c4fe8  jal         func_313FA0
    ctx->pc = 0x314C28u;
    SET_GPR_U32(ctx, 31, 0x314C30u);
    ctx->pc = 0x314C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C28u;
    // 0x314c2c: 0x7fae00d0  sq          $t6, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313FA0u;
    goto label_313fa0;
    ctx->pc = 0x314C30u;
label_314c30:
    // 0x314c30: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x314c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x314c34: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x314c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x314c38: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x314c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x314c3c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x314c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x314c40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x314c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x314c44: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x314c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x314c48: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x314c48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x314c4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x314c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x314c50: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x314c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x314c54: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x314c54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x314c58: 0x2652fffa  addiu       $s2, $s2, -0x6
    ctx->pc = 0x314c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
    // 0x314c5c: 0x7baa00b0  lq          $t2, 0xB0($sp)
    ctx->pc = 0x314c5cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x314c60: 0x7ba900a0  lq          $t1, 0xA0($sp)
    ctx->pc = 0x314c60u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x314c64: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x314c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x314c68: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x314c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x314c6c: 0x2449018  mult        $s2, $s2, $a0
    ctx->pc = 0x314c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x314c70: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x314c70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x314c74: 0x7bae00d0  lq          $t6, 0xD0($sp)
    ctx->pc = 0x314c74u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x314c78: 0x7bad00c0  lq          $t5, 0xC0($sp)
    ctx->pc = 0x314c78u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x314c7c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x314c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x314c80: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x314c80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x314c84: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x314c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x314c88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314c8c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x314c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314c90: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x314c90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x314c94: 0x918bc  dsll32      $v1, $t1, 2
    ctx->pc = 0x314c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 2));
    // 0x314c98: 0x2a4a825  or          $s5, $s5, $a0
    ctx->pc = 0x314c98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x314c9c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x314c9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x314ca0: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x314ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x314ca4: 0xa43b8  dsll        $t0, $t2, 14
    ctx->pc = 0x314ca4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << 14);
    // 0x314ca8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x314ca8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x314cac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x314cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x314cb0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x314cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x314cb4: 0x2138025  or          $s0, $s0, $s3
    ctx->pc = 0x314cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 19));
    // 0x314cb8: 0xe23b8  dsll        $a0, $t6, 14
    ctx->pc = 0x314cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << 14);
    // 0x314cbc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x314cbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x314cc0: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x314cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x314cc4: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x314cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x314cc8: 0x8fcf0078  lw          $t7, 0x78($fp)
    ctx->pc = 0x314cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x314ccc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x314cccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x314cd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x314cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x314cd4: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x314cd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x314cd8: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x314cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x314cdc: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x314cdcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x314ce0: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x314ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x314ce4: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x314ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x314ce8: 0x972025  or          $a0, $a0, $s7
    ctx->pc = 0x314ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 23));
    // 0x314cec: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x314cecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x314cf0: 0x36528000  ori         $s2, $s2, 0x8000
    ctx->pc = 0x314cf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
    // 0x314cf4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x314cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x314cf8: 0x3407ff00  ori         $a3, $zero, 0xFF00
    ctx->pc = 0x314cf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x314cfc: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x314cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x314d00: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x314d00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x314d04: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x314d04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x314d08: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x314d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x314d0c: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x314d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x314d10: 0x287a025  or          $s4, $s4, $a3
    ctx->pc = 0x314d10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 7));
    // 0x314d14: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x314d14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x314d18: 0x2a6a825  or          $s5, $s5, $a2
    ctx->pc = 0x314d18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
    // 0x314d1c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x314d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x314d20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x314d24: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x314d24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x314d28: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x314d28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x314d2c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x314d2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x314d30: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x314d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x314d34: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x314d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x314d38: 0xffb40028  sd          $s4, 0x28($sp)
    ctx->pc = 0x314d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 20));
    // 0x314d3c: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x314d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x314d40: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x314d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x314d44: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x314d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x314d48: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x314d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x314d4c: 0xffa40048  sd          $a0, 0x48($sp)
    ctx->pc = 0x314d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 4));
    // 0x314d50: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x314d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x314d54: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x314d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x314d58: 0xffae0060  sd          $t6, 0x60($sp)
    ctx->pc = 0x314d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 14));
    // 0x314d5c: 0xafad0090  sw          $t5, 0x90($sp)
    ctx->pc = 0x314d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 13));
    // 0x314d60: 0xffb20068  sd          $s2, 0x68($sp)
    ctx->pc = 0x314d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 18));
    // 0x314d64: 0xffa50070  sd          $a1, 0x70($sp)
    ctx->pc = 0x314d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 5));
    // 0x314d68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x314d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x314d6c: 0x0  nop
    ctx->pc = 0x314d6cu;
    // NOP
label_314d70:
    // 0x314d70: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x314d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x314d74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x314d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314d78: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x314d7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x314d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x314d80: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x314d80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x314d84: 0x0  nop
    ctx->pc = 0x314d84u;
    // NOP
label_314d88:
    // 0x314d88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x314d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d8c: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x314d8cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_314d90:
    // 0x314d90: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x314d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x314d94: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x314d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x314d98: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x314d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x314d9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314da0: 0x3442800b  ori         $v0, $v0, 0x800B
    ctx->pc = 0x314da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32779);
    // 0x314da4: 0x240f000e  addiu       $t7, $zero, 0xE
    ctx->pc = 0x314da4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x314da8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x314da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314dac: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x314dacu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x314db0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x314db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x314db4: 0xfcef0008  sd          $t7, 0x8($a3)
    ctx->pc = 0x314db4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
    // 0x314db8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314dbc: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x314dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x314dc0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x314dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x314dc4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x314dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314dc8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x314dc8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dcc: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x314dccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x314dd0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x314dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x314dd4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314dd8: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x314dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x314ddc: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x314ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x314de0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x314de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x314de4: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x314de4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314de8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x314de8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x314dec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314df0: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x314df0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x314df4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x314df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x314df8: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x314df8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x314dfc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e00: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x314e00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x314e04: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x314e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x314e08: 0xdfa50038  ld          $a1, 0x38($sp)
    ctx->pc = 0x314e08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x314e0c: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x314e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x314e10: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e14: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x314e14u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x314e18: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x314e18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x314e1c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e20: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x314e20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x314e24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x314e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314e28: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x314e28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x314e2c: 0x1e32018  mult        $a0, $t7, $v1
    ctx->pc = 0x314e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x314e30: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x314e30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x314e34: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x314e34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314e38: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x314e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x314e3c: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x314e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x314e40: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e44: 0xfcef0008  sd          $t7, 0x8($a3)
    ctx->pc = 0x314e44u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
    // 0x314e48: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x314e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314e4c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x314e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x314e50: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x314e50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x314e54: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x314e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x314e58: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x314e58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x314e5c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e60: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x314e60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x314e64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x314e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x314e68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314e6c: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x314e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x314e70: 0xdfaf0050  ld          $t7, 0x50($sp)
    ctx->pc = 0x314e70u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314e74: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x314e74u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
    // 0x314e78: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e7c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x314e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x314e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314e84: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x314e84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x314e88: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e8c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x314e90: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x314e90u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x314e94: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x314e94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x314e98: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314e9c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x314ea0: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x314ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x314ea4: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x314ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x314ea8: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x314ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x314eac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x314eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x314eb0: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x314eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x314eb4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314eb8: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x314eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x314ebc: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x314ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x314ec0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x314ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x314ec4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x314ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314ec8: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x314EC8u;
    {
        const bool branch_taken_0x314ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x314ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EC8u;
        // 0x314ecc: 0x8dc70004  lw          $a3, 0x4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ec8) {
            ctx->pc = 0x314FC8u;
            goto label_314fc8;
        }
    }
    ctx->pc = 0x314ED0u;
    // 0x314ed0: 0x8faf0014  lw          $t7, 0x14($sp)
    ctx->pc = 0x314ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x314ed4: 0x2410fff7  addiu       $s0, $zero, -0x9
    ctx->pc = 0x314ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x314ed8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x314ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314edc: 0x1e51023  subu        $v0, $t7, $a1
    ctx->pc = 0x314edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x314ee0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x314ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314ee4: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x314ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x314ee8: 0x24730200  addiu       $s3, $v1, 0x200
    ctx->pc = 0x314ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x314eec: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x314eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x314ef0: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x314ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314ef4: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x314ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x314ef8: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x314ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314efc: 0x244f0200  addiu       $t7, $v0, 0x200
    ctx->pc = 0x314efcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_314f00:
    // 0x314f00: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x314f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x314f04: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x314F04u;
    {
        const bool branch_taken_0x314f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F04u;
        // 0x314f08: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f04) {
            ctx->pc = 0x314FA8u;
            goto label_314fa8;
        }
    }
    ctx->pc = 0x314F0Cu;
    // 0x314f0c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x314f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x314f10: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x314f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x314f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314f18: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x314f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x314f1c: 0xf203c  dsll32      $a0, $t7, 0
    ctx->pc = 0x314f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << (32 + 0));
    // 0x314f20: 0x5443a  dsrl        $t0, $a1, 16
    ctx->pc = 0x314f20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) >> 16);
    // 0x314f24: 0x3cc3a  dsrl        $t9, $v1, 16
    ctx->pc = 0x314f24u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) >> 16);
    // 0x314f28: 0x4c43a  dsrl        $t8, $a0, 16
    ctx->pc = 0x314f28u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) >> 16);
    // 0x314f2c: 0x2bc3a  dsrl        $s7, $v0, 16
    ctx->pc = 0x314f2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) >> 16);
    // 0x314f30: 0x254903f7  addiu       $t1, $t2, 0x3F7
    ctx->pc = 0x314f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1015));
    // 0x314f34: 0x240c0400  addiu       $t4, $zero, 0x400
    ctx->pc = 0x314f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x314f38: 0x2546ffff  addiu       $a2, $t2, -0x1
    ctx->pc = 0x314f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x314f3c: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x314f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_314f40:
    // 0x314f40: 0xb203c  dsll32      $a0, $t3, 0
    ctx->pc = 0x314f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << (32 + 0));
    // 0x314f44: 0x256b0400  addiu       $t3, $t3, 0x400
    ctx->pc = 0x314f44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1024));
    // 0x314f48: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x314f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x314f4c: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x314f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x314f50: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314f54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x314f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x314f58: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x314f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x314f5c: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x314f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x314f60: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x314f60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x314f64: 0xc283c  dsll32      $a1, $t4, 0
    ctx->pc = 0x314f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 0));
    // 0x314f68: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x314f68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x314f6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314f70: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x314f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x314f74: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x314f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x314f78: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x314f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x314f7c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x314f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x314f80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314f84: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x314f84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x314f88: 0xb82825  or          $a1, $a1, $t8
    ctx->pc = 0x314f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x314f8c: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x314f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x314f90: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x314f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x314f94: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x314f94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x314f98: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x314f98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x314f9c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x314f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x314fa0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x314FA0u;
    {
        const bool branch_taken_0x314fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FA0u;
        // 0x314fa4: 0x258c0400  addiu       $t4, $t4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fa0) {
            ctx->pc = 0x314F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314f40;
        }
    }
    ctx->pc = 0x314FA8u;
label_314fa8:
    // 0x314fa8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x314fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314fac: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x314facu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x314fb0: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x314fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x314fb4: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x314fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x314fb8: 0x1a5102b  sltu        $v0, $t5, $a1
    ctx->pc = 0x314fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x314fbc: 0x25ef0200  addiu       $t7, $t7, 0x200
    ctx->pc = 0x314fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
    // 0x314fc0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x314FC0u;
    {
        const bool branch_taken_0x314fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FC0u;
        // 0x314fc4: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fc0) {
            ctx->pc = 0x314F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314f00;
        }
    }
    ctx->pc = 0x314FC8u;
label_314fc8:
    // 0x314fc8: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x314fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x314fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314FCCu;
    {
        const bool branch_taken_0x314fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FCCu;
        // 0x314fd0: 0x8dc70008  lw          $a3, 0x8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fcc) {
            ctx->pc = 0x314FF0u;
            goto label_314ff0;
        }
    }
    ctx->pc = 0x314FD4u;
    // 0x314fd4: 0x3c0210a9  lui         $v0, 0x10A9
    ctx->pc = 0x314fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4265 << 16));
    // 0x314fd8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x314fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x314fdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314fe0: 0x34428006  ori         $v0, $v0, 0x8006
    ctx->pc = 0x314fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x314fe4: 0x240f000e  addiu       $t7, $zero, 0xE
    ctx->pc = 0x314fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x314fe8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314FE8u;
    {
        const bool branch_taken_0x314fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FE8u;
        // 0x314fec: 0xfcef0008  sd          $t7, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fe8) {
            ctx->pc = 0x315008u;
            goto label_315008;
        }
    }
    ctx->pc = 0x314FF0u;
label_314ff0:
    // 0x314ff0: 0x3c0210ab  lui         $v0, 0x10AB
    ctx->pc = 0x314ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4267 << 16));
    // 0x314ff4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x314ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x314ff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314ffc: 0x34428006  ori         $v0, $v0, 0x8006
    ctx->pc = 0x314ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x315000: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x315000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315004: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x315004u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
label_315008:
    // 0x315008: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x315008u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x31500c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x31500cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x315010: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x315010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x315014: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x315014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x315018: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x315018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31501c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x31501cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x315020: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x315020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x315024: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x315028: 0xdfaf0060  ld          $t7, 0x60($sp)
    ctx->pc = 0x315028u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31502c: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x31502cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315030: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x315030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x315034: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x315034u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x315038: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x315038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31503c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x31503cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x315040: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x315040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x315044: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x315044u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x315048: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x315048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31504c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x31504cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x315050: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x315050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x315054: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x315054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x315058: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x315058u;
    {
        const bool branch_taken_0x315058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315058u;
        // 0x31505c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315058) {
            ctx->pc = 0x315078u;
            goto label_315078;
        }
    }
    ctx->pc = 0x315060u;
    // 0x315060: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x315060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x315064: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x315064u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x315068: 0xdfaf0068  ld          $t7, 0x68($sp)
    ctx->pc = 0x315068u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31506c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31506Cu;
    {
        const bool branch_taken_0x31506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31506Cu;
        // 0x315070: 0xfcef0000  sd          $t7, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31506c) {
            ctx->pc = 0x315088u;
            goto label_315088;
        }
    }
    ctx->pc = 0x315074u;
    // 0x315074: 0x0  nop
    ctx->pc = 0x315074u;
    // NOP
label_315078:
    // 0x315078: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x315078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x31507c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x31507cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x315080: 0xdfa30070  ld          $v1, 0x70($sp)
    ctx->pc = 0x315080u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x315084: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x315084u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_315088:
    // 0x315088: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x315088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31508c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x31508cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x315090: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x315090u;
    {
        const bool branch_taken_0x315090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315090u;
        // 0x315094: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315090) {
            ctx->pc = 0x314D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d90;
        }
    }
    ctx->pc = 0x315098u;
    // 0x315098: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x315098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31509c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x31509cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x3150a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3150a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3150a4: 0x1080ff38  beqz        $a0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x3150A4u;
    {
        const bool branch_taken_0x3150a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150A4u;
        // 0x3150a8: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150a4) {
            ctx->pc = 0x314D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d88;
        }
    }
    ctx->pc = 0x3150ACu;
    // 0x3150ac: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3150acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3150b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3150b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3150b4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x3150b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3150b8: 0x1440ff2d  bnez        $v0, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x3150B8u;
    {
        const bool branch_taken_0x3150b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3150BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150B8u;
        // 0x3150bc: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150b8) {
            ctx->pc = 0x314D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d70;
        }
    }
    ctx->pc = 0x3150C0u;
    // 0x3150c0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x3150c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3150c4: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x3150c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3150c8: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x3150c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3150cc: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x3150ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3150d0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x3150d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3150d4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x3150d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3150d8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x3150d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3150dc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x3150dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3150e0: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x3150e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3150e4: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x3150e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3150e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3150E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3150ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150E8u;
        // 0x3150ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3150E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3150F0u;
}
