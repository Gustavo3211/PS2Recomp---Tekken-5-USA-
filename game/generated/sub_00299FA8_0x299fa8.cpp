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

// Function: sub_00299FA8
// Address: 0x299fa8 - 0x29a150
void sub_00299FA8_0x299fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299FA8_0x299fa8");
#endif

    switch (ctx->pc) {
        case 0x299ff8u: goto label_299ff8;
        default: break;
    }

    ctx->pc = 0x299fa8u;

    // 0x299fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299fac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x299facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299fb4: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x299fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x299fb8: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x299fbc: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x299fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x299fc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299FC0u;
    {
        const bool branch_taken_0x299fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FC0u;
        // 0x299fc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fc0) {
            ctx->pc = 0x299FE0u;
            goto label_299fe0;
        }
    }
    ctx->pc = 0x299FC8u;
    // 0x299fc8: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x299fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299fcc: 0xc780901c  lwc1        $f0, -0x6FE4($gp)
    ctx->pc = 0x299fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299fd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x299fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299fd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x299FD4u;
    {
        const bool branch_taken_0x299fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FD4u;
        // 0x299fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fd4) {
            ctx->pc = 0x299FE8u;
            goto label_299fe8;
        }
    }
    ctx->pc = 0x299FDCu;
    // 0x299fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299fe0:
    // 0x299fe0: 0x80a68e2  j           func_29A388
    ctx->pc = 0x299FE0u;
    ctx->pc = 0x299FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299FE0u;
    // 0x299fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A388u;
    sub_0029A388_0x29a388(rdram, ctx, runtime); return;
    ctx->pc = 0x299FE8u;
label_299fe8:
    // 0x299fe8: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x299fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x299fec: 0xaca20160  sw          $v0, 0x160($a1)
    ctx->pc = 0x299fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 2));
    // 0x299ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x299FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FF0u;
        // 0x299ff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FF8u;
label_299ff8:
    // 0x299ff8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x299ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ffc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x299ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29a000: 0x8d260150  lw          $a2, 0x150($t1)
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 336)));
    // 0x29a004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a008: 0x8d2b0154  lw          $t3, 0x154($t1)
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 340)));
    // 0x29a00c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29a010: 0x8cc40108  lw          $a0, 0x108($a2)
    ctx->pc = 0x29a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x29a014: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x29a014u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a018: 0x8d2a0158  lw          $t2, 0x158($t1)
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 344)));
    // 0x29a01c: 0x1812  mflo        $v1
    ctx->pc = 0x29a01cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x29a020: 0x28620001  slti        $v0, $v1, 0x1
    ctx->pc = 0x29a020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x29a024: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29a024u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29a028: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29a02c: 0xacc40108  sw          $a0, 0x108($a2)
    ctx->pc = 0x29a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 4));
    // 0x29a030: 0x8d220150  lw          $v0, 0x150($t1)
    ctx->pc = 0x29a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 336)));
    // 0x29a034: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x29a038: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x29a038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a03c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A03Cu;
    {
        const bool branch_taken_0x29a03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a03c) {
            ctx->pc = 0x29A040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A03Cu;
            // 0x29a040: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A060u;
            goto label_29a060;
        }
    }
    ctx->pc = 0x29A044u;
    // 0x29a044: 0x8d230154  lw          $v1, 0x154($t1)
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 340)));
    // 0x29a048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29a048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a04c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x29a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x29a050: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a054: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29a058: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a05c: 0xad250160  sw          $a1, 0x160($t1)
    ctx->pc = 0x29a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 352), GPR_U32(ctx, 5));
label_29a060:
    // 0x29a060: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x29a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29a064: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x29a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x29a068: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x29a068u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a06c: 0x2812  mflo        $a1
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x29a070: 0x3810  mfhi        $a3
    ctx->pc = 0x29a070u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29a074: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x29a074u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a078: 0x2012  mflo        $a0
    ctx->pc = 0x29a078u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x29a07c: 0x2810  mfhi        $a1
    ctx->pc = 0x29a07cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x29a080: 0x28820064  slti        $v0, $a0, 0x64
    ctx->pc = 0x29a080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29a084: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A084u;
    {
        const bool branch_taken_0x29a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a084) {
            ctx->pc = 0x29A088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A084u;
            // 0x29a088: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A0A8u;
            goto label_29a0a8;
        }
    }
    ctx->pc = 0x29A08Cu;
    // 0x29a08c: 0x8d230150  lw          $v1, 0x150($t1)
    ctx->pc = 0x29a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 336)));
    // 0x29a090: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x29a090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29a094: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x29a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29a098: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29a09c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a0a0: 0xac620108  sw          $v0, 0x108($v1)
    ctx->pc = 0x29a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 2));
    // 0x29a0a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29a0a8:
    // 0x29a0a8: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x29a0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x29a0ac: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x29a0acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a0b0: 0x3812  mflo        $a3
    ctx->pc = 0x29a0b0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x29a0b4: 0x4010  mfhi        $t0
    ctx->pc = 0x29a0b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x29a0b8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x29a0b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a0bc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x29a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29a0c0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x29a0c4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29a0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29a0c8: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x29a0cc: 0x1812  mflo        $v1
    ctx->pc = 0x29a0ccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x29a0d0: 0x2010  mfhi        $a0
    ctx->pc = 0x29a0d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29a0d4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x29a0d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a0d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29a0dc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x29a0e0: 0x2812  mflo        $a1
    ctx->pc = 0x29a0e0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x29a0e4: 0x3010  mfhi        $a2
    ctx->pc = 0x29a0e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29a0e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29a0e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a0ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29a0f0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29a0f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29a0f8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x29a0fc: 0x1810  mfhi        $v1
    ctx->pc = 0x29a0fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29a100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a104: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x29a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x29a108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a10c: 0xad220078  sw          $v0, 0x78($t1)
    ctx->pc = 0x29a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 2));
    // 0x29a110: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a114: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x29a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x29a118: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x29a118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x29a11c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a120: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x29a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x29a124: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x29a124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x29a128: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29a12c: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x29a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x29a130: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x29a130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x29a134: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x29a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x29a138: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x29a138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29a13c: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x29a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x29a140: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x29a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x29a144: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29a148: 0x3e00008  jr          $ra
    ctx->pc = 0x29A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A148u;
        // 0x29a14c: 0xac620078  sw          $v0, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A150u;
}
