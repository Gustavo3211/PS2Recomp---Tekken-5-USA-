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

// Function: sub_002CF7F0
// Address: 0x2cf7f0 - 0x2cf930
void sub_002CF7F0_0x2cf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7F0_0x2cf7f0");
#endif

    switch (ctx->pc) {
        case 0x2cf860u: goto label_2cf860;
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf8c0u: goto label_2cf8c0;
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8f4u: goto label_2cf8f4;
        case 0x2cf904u: goto label_2cf904;
        default: break;
    }

    ctx->pc = 0x2cf7f0u;

    // 0x2cf7f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cf7f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2cf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2cf7f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2cf7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2cf7fc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2cf7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2cf800: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2cf800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2cf804: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2cf804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2cf808: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2cf808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2cf80c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2cf80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2cf810: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2cf810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2cf814: 0x8c930898  lw          $s3, 0x898($a0)
    ctx->pc = 0x2cf814u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2cf818: 0x8c8207c8  lw          $v0, 0x7C8($a0)
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1992)));
    // 0x2cf81c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CF81Cu;
    {
        const bool branch_taken_0x2cf81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF81Cu;
        // 0x2cf820: 0x8e710040  lw          $s1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf81c) {
            ctx->pc = 0x2CF8ACu;
            goto label_2cf8ac;
        }
    }
    ctx->pc = 0x2CF824u;
    // 0x2cf824: 0x8c820804  lw          $v0, 0x804($a0)
    ctx->pc = 0x2cf824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x2cf828: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CF828u;
    {
        const bool branch_taken_0x2cf828 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf828) {
            ctx->pc = 0x2CF82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF828u;
            // 0x2cf82c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF8B0u;
            goto label_2cf8b0;
        }
    }
    ctx->pc = 0x2CF830u;
    // 0x2cf830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cf834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cf838: 0x8e720044  lw          $s2, 0x44($s3)
    ctx->pc = 0x2cf838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2cf83c: 0xc48007fc  lwc1        $f0, 0x7FC($a0)
    ctx->pc = 0x2cf83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cf840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cf844: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x2cf844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2cf848: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2cf848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf84c: 0x2414ffbc  addiu       $s4, $zero, -0x44
    ctx->pc = 0x2cf84cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x2cf850: 0x0  nop
    ctx->pc = 0x2cf850u;
    // NOP
    // 0x2cf854: 0x0  nop
    ctx->pc = 0x2cf854u;
    // NOP
    // 0x2cf858: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2cf858u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2cf85c: 0x2151004  sllv        $v0, $s5, $s0
    ctx->pc = 0x2cf85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
label_2cf860:
    // 0x2cf860: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2cf860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2cf864: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF864u;
    {
        const bool branch_taken_0x2cf864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF864u;
        // 0x2cf868: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf864) {
            ctx->pc = 0x2CF888u;
            goto label_2cf888;
        }
    }
    ctx->pc = 0x2CF86Cu;
    // 0x2cf86c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2cf870: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x2cf870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2cf874: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2cf874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2cf878: 0xc097110  jal         func_25C440
    ctx->pc = 0x2CF878u;
    SET_GPR_U32(ctx, 31, 0x2CF880u);
    ctx->pc = 0x2CF87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF878u;
    // 0x2cf87c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2CF878u, 0x2CF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF880u;
label_2cf880:
    // 0x2cf880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF880u;
    {
        const bool branch_taken_0x2cf880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF880u;
        // 0x2cf884: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf880) {
            ctx->pc = 0x2CF8A0u;
            goto label_2cf8a0;
        }
    }
    ctx->pc = 0x2CF888u;
label_2cf888:
    // 0x2cf888: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2cf888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2cf88c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x2cf88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2cf890: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2cf890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2cf894: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x2CF894u;
    SET_GPR_U32(ctx, 31, 0x2CF89Cu);
    ctx->pc = 0x2CF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF894u;
    // 0x2cf898: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x2CF894u, 0x2CF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF89Cu;
label_2cf89c:
    // 0x2cf89c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2cf89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2cf8a0:
    // 0x2cf8a0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2cf8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cf8a4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CF8A4u;
    {
        const bool branch_taken_0x2cf8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8A4u;
        // 0x2cf8a8: 0x2151004  sllv        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8a4) {
            ctx->pc = 0x2CF860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf860;
        }
    }
    ctx->pc = 0x2CF8ACu;
label_2cf8ac:
    // 0x2cf8ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cf8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2cf8b0:
    // 0x2cf8b0: 0x8e720048  lw          $s2, 0x48($s3)
    ctx->pc = 0x2cf8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2cf8b4: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2cf8b8: 0x2453eb48  addiu       $s3, $v0, -0x14B8
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961992));
    // 0x2cf8bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2cf8c0:
    // 0x2cf8c0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2cf8c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cf8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cf8c8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2cf8cc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2cf8ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf8d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2cf8d4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2cf8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cf8d8: 0xc097084  jal         func_25C210
    ctx->pc = 0x2CF8D8u;
    SET_GPR_U32(ctx, 31, 0x2CF8E0u);
    ctx->pc = 0x2CF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8D8u;
    // 0x2cf8dc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2CF8D8u, 0x2CF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8E0u;
label_2cf8e0:
    // 0x2cf8e0: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CF8E0u;
    {
        const bool branch_taken_0x2cf8e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2CF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8E0u;
        // 0x2cf8e4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8e0) {
            ctx->pc = 0x2CF8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf8c0;
        }
    }
    ctx->pc = 0x2CF8E8u;
    // 0x2cf8e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cf8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8ec: 0xc097084  jal         func_25C210
    ctx->pc = 0x2CF8ECu;
    SET_GPR_U32(ctx, 31, 0x2CF8F4u);
    ctx->pc = 0x2CF8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8ECu;
    // 0x2cf8f0: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2CF8ECu, 0x2CF8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8F4u;
label_2cf8f4:
    // 0x2cf8f4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x2cf8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x2cf8f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cf8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf8fc: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2CF8FCu;
    SET_GPR_U32(ctx, 31, 0x2CF904u);
    ctx->pc = 0x2CF900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8FCu;
    // 0x2cf900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2CF8FCu, 0x2CF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF904u;
label_2cf904:
    // 0x2cf904: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2cf904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf908: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2cf908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cf90c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2cf90cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf910: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2cf910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cf914: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2cf914u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf918: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2cf918u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cf91c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2cf91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cf920: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x2cf920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf924: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF924u;
        // 0x2cf928: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF92Cu;
    // 0x2cf92c: 0x0  nop
    ctx->pc = 0x2cf92cu;
    // NOP
    ctx->pc = 0x2cf930u;
}
