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

// Function: sub_002576C0
// Address: 0x2576c0 - 0x257878
void sub_002576C0_0x2576c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002576C0_0x2576c0");
#endif

    switch (ctx->pc) {
        case 0x257718u: goto label_257718;
        case 0x257730u: goto label_257730;
        case 0x257744u: goto label_257744;
        default: break;
    }

    ctx->pc = 0x2576c0u;

    // 0x2576c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2576c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2576c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2576c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2576c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2576cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2576ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2576d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2576d4: 0x2697ffff  addiu       $s7, $s4, -0x1
    ctx->pc = 0x2576d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2576d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2576d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2576dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2576dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2576e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2576e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2576e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576e8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2576e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2576ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2576ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576f0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2576f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2576f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2576f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2576f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2576f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2576fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2576fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x257700: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x257700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x257704: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x257704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x257708: 0x1ae00026  blez        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x257708u;
    {
        const bool branch_taken_0x257708 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x25770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257708u;
        // 0x25770c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257708) {
            ctx->pc = 0x2577A4u;
            goto label_2577a4;
        }
    }
    ctx->pc = 0x257710u;
    // 0x257710: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257714: 0x0  nop
    ctx->pc = 0x257714u;
    // NOP
label_257718:
    // 0x257718: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x257718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x25771c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25771Cu;
    {
        const bool branch_taken_0x25771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25771Cu;
        // 0x257720: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25771c) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257724u;
    // 0x257724: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x257728: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25772c: 0x0  nop
    ctx->pc = 0x25772cu;
    // NOP
label_257730:
    // 0x257730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x257730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257734: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x257738: 0x2753021  addu        $a2, $s3, $s5
    ctx->pc = 0x257738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x25773c: 0xc084784  jal         func_211E10
    ctx->pc = 0x25773Cu;
    SET_GPR_U32(ctx, 31, 0x257744u);
    ctx->pc = 0x257740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25773Cu;
    // 0x257740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x25773Cu, 0x257744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257744u;
label_257744:
    // 0x257744: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x257744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257748: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x257748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25774c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257750: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x257750u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x257754: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x257754u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x257758: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x257758u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25775c: 0x46010044  c1          0x10044
    ctx->pc = 0x25775cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x257760: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x257760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257764: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x257764u;
    {
        const bool branch_taken_0x257764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257764) {
            ctx->pc = 0x257768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257764u;
            // 0x257768: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257788u;
            goto label_257788;
        }
    }
    ctx->pc = 0x25776Cu;
    // 0x25776c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x25776cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x257770: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x257770u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x257774: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x257774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x257778: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x257778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x25777c: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x257780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257780u;
    {
        const bool branch_taken_0x257780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257780u;
        // 0x257784: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257780) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257788u;
label_257788:
    // 0x257788: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x257788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x25778c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x25778Cu;
    {
        const bool branch_taken_0x25778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25778Cu;
        // 0x257790: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25778c) {
            ctx->pc = 0x257730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257730;
        }
    }
    ctx->pc = 0x257794u;
label_257794:
    // 0x257794: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x257794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257798: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x257798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25779c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25779Cu;
    {
        const bool branch_taken_0x25779c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2577A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25779Cu;
        // 0x2577a0: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25779c) {
            ctx->pc = 0x257718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257718;
        }
    }
    ctx->pc = 0x2577A4u;
label_2577a4:
    // 0x2577a4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2577a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2577a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2577ac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2577acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2577b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2577b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2577b4: 0x162100  sll         $a0, $s6, 4
    ctx->pc = 0x2577b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2577b8: 0x7843fff0  lq          $v1, -0x10($v0)
    ctx->pc = 0x2577b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x2577bc: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2577bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2577c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2577c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2577c4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x2577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2577c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2577c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2577ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2577d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2577d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2577d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2577d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2577d8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2577d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2577dc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2577dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2577e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2577e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2577e4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2577e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2577e8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2577e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2577ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2577ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2577F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577ECu;
        // 0x2577f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577F4u;
    // 0x2577f4: 0x0  nop
    ctx->pc = 0x2577f4u;
    // NOP
    // 0x2577f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2577f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2577fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2577fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257800: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x257800u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
    // 0x257804: 0x460c601a  mula.s      $f12, $f12
    ctx->pc = 0x257804u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x257808: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x257808u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25780c: 0x46001096  rsqrt.s     $f2, $f2, $f0
    ctx->pc = 0x25780cu;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[2]);
    // 0x257810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257818: 0x46007806  mov.s       $f0, $f15
    ctx->pc = 0x257818u;
    ctx->f[0] = FPU_MOV_S(ctx->f[15]);
    // 0x25781c: 0x460e701a  mula.s      $f14, $f14
    ctx->pc = 0x25781cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x257820: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x257820u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x257824: 0x46000856  rsqrt.s     $f1, $f1, $f0
    ctx->pc = 0x257824u;
    ctx->f[1] = 1.0f / sqrtf(ctx->f[1]);
    // 0x257828: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x257828u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x25782c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257830: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x257834: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x257834u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x257838: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x257838u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x25783c: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x25783cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x257840: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x257840u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x257844: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x257844u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x257848: 0x460f6b40  add.s       $f13, $f13, $f15
    ctx->pc = 0x257848u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x25784c: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x25784cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x257850: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x257850u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x257854: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x257854u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x257858: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x257858u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25785c: 0x460018d6  rsqrt.s     $f3, $f3, $f0
    ctx->pc = 0x25785cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x257860: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x257860u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x257864: 0x46036b42  mul.s       $f13, $f13, $f3
    ctx->pc = 0x257864u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x257868: 0xe4ad0000  swc1        $f13, 0x0($a1)
    ctx->pc = 0x257868u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25786c: 0x3e00008  jr          $ra
    ctx->pc = 0x25786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25786Cu;
        // 0x257870: 0xe4cc0000  swc1        $f12, 0x0($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257874u;
    // 0x257874: 0x0  nop
    ctx->pc = 0x257874u;
    // NOP
    ctx->pc = 0x257878u;
}
