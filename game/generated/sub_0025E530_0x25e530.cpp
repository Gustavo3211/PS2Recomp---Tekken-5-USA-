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

// Function: sub_0025E530
// Address: 0x25e530 - 0x25e650
void sub_0025E530_0x25e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E530_0x25e530");
#endif

    switch (ctx->pc) {
        case 0x25e564u: goto label_25e564;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e620u: goto label_25e620;
        default: break;
    }

    ctx->pc = 0x25e530u;

    // 0x25e530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e538: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25e538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e53c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e540: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x25e540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x25e544: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x25e544u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25e548: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25e548u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25e54c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x25e54cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25e550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25e554: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25e558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e55c: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25E55Cu;
    SET_GPR_U32(ctx, 31, 0x25E564u);
    ctx->pc = 0x25E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E55Cu;
    // 0x25e560: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25E55Cu, 0x25E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E564u;
label_25e564:
    // 0x25e564: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25e564u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25e568: 0xc7808b74  lwc1        $f0, -0x748C($gp)
    ctx->pc = 0x25e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e56c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25e56cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e570: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25E570u;
    {
        const bool branch_taken_0x25e570 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E570u;
        // 0x25e574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e570) {
            ctx->pc = 0x25E590u;
            goto label_25e590;
        }
    }
    ctx->pc = 0x25E578u;
    // 0x25e578: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e57c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25e580: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x25e580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x25e584: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25E584u;
    {
        const bool branch_taken_0x25e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E584u;
        // 0x25e588: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e584) {
            ctx->pc = 0x25E620u;
            goto label_25e620;
        }
    }
    ctx->pc = 0x25E58Cu;
    // 0x25e58c: 0x0  nop
    ctx->pc = 0x25e58cu;
    // NOP
label_25e590:
    // 0x25e590: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25e594: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25e594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25e598: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x25e598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e59c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e5a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e5a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x25e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25e5a8: 0x244300e0  addiu       $v1, $v0, 0xE0
    ctx->pc = 0x25e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25e5ac:
    // 0x25e5ac: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x25e5acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e5b0: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x25e5b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e5b4: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x25e5b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25e5b8: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x25e5b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25e5bc: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x25e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x25e5c0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x25e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x25e5c4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x25e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x25e5c8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x25e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x25e5cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x25e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x25e5d0: 0x0  nop
    ctx->pc = 0x25e5d0u;
    // NOP
    // 0x25e5d4: 0x0  nop
    ctx->pc = 0x25e5d4u;
    // NOP
    // 0x25e5d8: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25E5D8u;
    {
        const bool branch_taken_0x25e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D8u;
        // 0x25e5dc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5d8) {
            ctx->pc = 0x25E5ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e5ac;
        }
    }
    ctx->pc = 0x25E5E0u;
    // 0x25e5e0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x25e5e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e5e4: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x25e5e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e5e8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x25e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x25e5ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25E5ECu;
    {
        const bool branch_taken_0x25e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5ECu;
        // 0x25e5f0: 0xfc850008  sd          $a1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5ec) {
            ctx->pc = 0x25E62Cu;
            goto label_25e62c;
        }
    }
    ctx->pc = 0x25E5F4u;
    // 0x25e5f4: 0x0  nop
    ctx->pc = 0x25e5f4u;
    // NOP
label_25e5f8:
    // 0x25e5f8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x25e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25e5fc: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25e600: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25e600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25e604: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x25e604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25e608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25e608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25e60c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25e610: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25e610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25e614: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x25e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x25e618: 0xc097110  jal         func_25C440
    ctx->pc = 0x25E618u;
    SET_GPR_U32(ctx, 31, 0x25E620u);
    ctx->pc = 0x25E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E618u;
    // 0x25e61c: 0x24a600f0  addiu       $a2, $a1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x25E618u, 0x25E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E620u;
label_25e620:
    // 0x25e620: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x25e620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x25e624: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25E624u;
    {
        const bool branch_taken_0x25e624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E624u;
        // 0x25e628: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e624) {
            ctx->pc = 0x25E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e5f8;
        }
    }
    ctx->pc = 0x25E62Cu;
label_25e62c:
    // 0x25e62c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25e62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e630: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25e630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25e634: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e638: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x25e638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25e63c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e640: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x25e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25e644: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x25e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e648: 0x3e00008  jr          $ra
    ctx->pc = 0x25E648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E648u;
        // 0x25e64c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E650u;
}
