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

// Function: sub_0029AB40
// Address: 0x29ab40 - 0x29ac20
void sub_0029AB40_0x29ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB40_0x29ab40");
#endif

    switch (ctx->pc) {
        case 0x29abd8u: goto label_29abd8;
        case 0x29ac04u: goto label_29ac04;
        default: break;
    }

    ctx->pc = 0x29ab40u;

    // 0x29ab40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ab44: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29ab48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ab4c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x29ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29ab50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ab54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29ab58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ab5c: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x29ab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ab60: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x29ab60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29ab64: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x29ab64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x29ab68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29ab6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29ab70: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29ab74: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x29ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x29ab78: 0xc421c648  lwc1        $f1, -0x39B8($at)
    ctx->pc = 0x29ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab7c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29ab7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ab80: 0x8c8a0150  lw          $t2, 0x150($a0)
    ctx->pc = 0x29ab80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29ab84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab88: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x29ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29ab8c: 0xc5400104  lwc1        $f0, 0x104($t2)
    ctx->pc = 0x29ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ab90: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x29ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x29ab94: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x29ab94u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29ab98: 0x8012  mflo        $s0
    ctx->pc = 0x29ab98u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x29ab9c: 0x9010  mfhi        $s2
    ctx->pc = 0x29ab9cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x29aba0: 0x209001a  div         $zero, $s0, $t1
    ctx->pc = 0x29aba0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29aba4: 0x8812  mflo        $s1
    ctx->pc = 0x29aba4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x29aba8: 0x8010  mfhi        $s0
    ctx->pc = 0x29aba8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x29abac: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x29abacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29abb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29ABB0u;
    {
        const bool branch_taken_0x29abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABB0u;
        // 0x29abb4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abb0) {
            ctx->pc = 0x29ABC4u;
            goto label_29abc4;
        }
    }
    ctx->pc = 0x29ABB8u;
    // 0x29abb8: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29abbc: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x29abbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29abc0: 0x2410003b  addiu       $s0, $zero, 0x3B
    ctx->pc = 0x29abc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_29abc4:
    // 0x29abc4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29abc8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x29abc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29abcc: 0x2484c118  addiu       $a0, $a0, -0x3EE8
    ctx->pc = 0x29abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
    // 0x29abd0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29ABD0u;
    SET_GPR_U32(ctx, 31, 0x29ABD8u);
    ctx->pc = 0x29ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABD0u;
    // 0x29abd4: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29ABD0u, 0x29ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABD8u;
label_29abd8:
    // 0x29abd8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29abdc: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29abdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29abe0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x29abe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29abe4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x29abe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abe8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29abe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29abecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abf0: 0x2484c128  addiu       $a0, $a0, -0x3ED8
    ctx->pc = 0x29abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951208));
    // 0x29abf4: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x29abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x29abf8: 0x63023  negu        $a2, $a2
    ctx->pc = 0x29abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x29abfc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29ABFCu;
    SET_GPR_U32(ctx, 31, 0x29AC04u);
    ctx->pc = 0x29AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABFCu;
    // 0x29ac00: 0x24c600e1  addiu       $a2, $a2, 0xE1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29ABFCu, 0x29AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC04u;
label_29ac04:
    // 0x29ac04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ac04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ac08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ac0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ac0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ac10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29ac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ac14: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x29ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ac18: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC18u;
        // 0x29ac1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC20u;
}
