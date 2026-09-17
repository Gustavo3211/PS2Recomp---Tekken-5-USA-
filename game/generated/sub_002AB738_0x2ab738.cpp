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

// Function: sub_002AB738
// Address: 0x2ab738 - 0x2aba90
void sub_002AB738_0x2ab738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB738_0x2ab738");
#endif

    switch (ctx->pc) {
        case 0x2ab780u: goto label_2ab780;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab7f8u: goto label_2ab7f8;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab844u: goto label_2ab844;
        case 0x2ab884u: goto label_2ab884;
        case 0x2ab894u: goto label_2ab894;
        case 0x2ab938u: goto label_2ab938;
        case 0x2ab940u: goto label_2ab940;
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9dcu: goto label_2ab9dc;
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba10u: goto label_2aba10;
        case 0x2aba28u: goto label_2aba28;
        case 0x2aba40u: goto label_2aba40;
        case 0x2aba64u: goto label_2aba64;
        default: break;
    }

    ctx->pc = 0x2ab738u;

label_2ab738:
    // 0x2ab738: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ab738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ab73c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ab73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ab740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab744: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ab744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ab748: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ab748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ab74c: 0xe7b80098  swc1        $f24, 0x98($sp)
    ctx->pc = 0x2ab74cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ab750: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x2ab750u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ab754: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x2ab754u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ab758: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2ab758u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ab75c: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2ab75cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2ab760: 0xda380000  lqc2        $vf24, 0x0($s1)
    ctx->pc = 0x2ab760u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab764: 0xda390010  lqc2        $vf25, 0x10($s1)
    ctx->pc = 0x2ab764u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ab768: 0xda3a0020  lqc2        $vf26, 0x20($s1)
    ctx->pc = 0x2ab768u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ab76c: 0xda3b0030  lqc2        $vf27, 0x30($s1)
    ctx->pc = 0x2ab76cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ab770: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x2ab770u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x2ab774: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x2ab774u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ab778: 0xc0a60ec  jal         func_2983B0
    ctx->pc = 0x2AB778u;
    SET_GPR_U32(ctx, 31, 0x2AB780u);
    ctx->pc = 0x2983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983B0u, 0x2AB778u, 0x2AB780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB780u;
label_2ab780:
    // 0x2ab780: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x2ab780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x2ab784: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2ab784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2ab788: 0x546000b7  bnel        $v1, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2AB788u;
    {
        const bool branch_taken_0x2ab788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab788) {
            ctx->pc = 0x2AB78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB788u;
            // 0x2ab78c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB790u;
    // 0x2ab790: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2ab790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2ab794: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ab794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ab798: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2AB798u;
    {
        const bool branch_taken_0x2ab798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB798u;
        // 0x2ab79c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab798) {
            ctx->pc = 0x2ABA64u;
            goto label_2aba64;
        }
    }
    ctx->pc = 0x2AB7A0u;
    // 0x2ab7a0: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x2ab7a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ab7a4: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2ab7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x2ab7a8: 0x544300af  bnel        $v0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2AB7A8u;
    {
        const bool branch_taken_0x2ab7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ab7a8) {
            ctx->pc = 0x2AB7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB7A8u;
            // 0x2ab7ac: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB7B0u;
    // 0x2ab7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7b4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB7B4u;
    SET_GPR_U32(ctx, 31, 0x2AB7BCu);
    ctx->pc = 0x2AB7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7B4u;
    // 0x2ab7b8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB7B4u, 0x2AB7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7BCu;
label_2ab7bc:
    // 0x2ab7bc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2ab7bcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2ab7c0: 0xc7809090  lwc1        $f0, -0x6F70($gp)
    ctx->pc = 0x2ab7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab7c4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2ab7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab7c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB7C8u;
    {
        const bool branch_taken_0x2ab7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7C8u;
        // 0x2ab7cc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7c8) {
            ctx->pc = 0x2AB7E0u;
            goto label_2ab7e0;
        }
    }
    ctx->pc = 0x2AB7D0u;
    // 0x2ab7d0: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2ab7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ab7d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ab7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2ab7d8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2AB7D8u;
    {
        const bool branch_taken_0x2ab7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB7D8u;
        // 0x2ab7dc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7d8) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB7E0u;
label_2ab7e0:
    // 0x2ab7e0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB7E0u;
    SET_GPR_U32(ctx, 31, 0x2AB7E8u);
    ctx->pc = 0x2AB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7E0u;
    // 0x2ab7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB7E0u, 0x2AB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7E8u;
label_2ab7e8:
    // 0x2ab7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ab7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ab7f0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB7F0u;
    SET_GPR_U32(ctx, 31, 0x2AB7F8u);
    ctx->pc = 0x2AB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB7F0u;
    // 0x2ab7f4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB7F0u, 0x2AB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB7F8u;
label_2ab7f8:
    // 0x2ab7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2ab7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ab800: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB800u;
    SET_GPR_U32(ctx, 31, 0x2AB808u);
    ctx->pc = 0x2AB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB800u;
    // 0x2ab804: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB800u, 0x2AB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB808u;
label_2ab808:
    // 0x2ab808: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2ab808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ab80c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2ab80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2ab810: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ab810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ab814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB814u;
    {
        const bool branch_taken_0x2ab814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB814u;
        // 0x2ab818: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab814) {
            ctx->pc = 0x2AB830u;
            goto label_2ab830;
        }
    }
    ctx->pc = 0x2AB81Cu;
    // 0x2ab81c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab824: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2ab824u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2ab828: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2ab828u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2ab82c: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2ab82cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2ab830:
    // 0x2ab830: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2ab830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2ab834: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AB834u;
    {
        const bool branch_taken_0x2ab834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab834) {
            ctx->pc = 0x2AB838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB834u;
            // 0x2ab838: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB948u;
            goto label_2ab948;
        }
    }
    ctx->pc = 0x2AB83Cu;
    // 0x2ab83c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2AB83Cu;
    SET_GPR_U32(ctx, 31, 0x2AB844u);
    ctx->pc = 0x2AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB83Cu;
    // 0x2ab840: 0x263000b4  addiu       $s0, $s1, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2AB83Cu, 0x2AB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB844u;
label_2ab844:
    // 0x2ab844: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2ab844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab848: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2ab848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab84c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2ab84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab850: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ab850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab854: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ab854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab858: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ab858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ab85c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ab85cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ab860: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ab860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ab864: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2ab864u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ab868: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2ab868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab86c: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2ab86cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab870: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2ab870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ab874: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2ab874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ab878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab87c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB87Cu;
    SET_GPR_U32(ctx, 31, 0x2AB884u);
    ctx->pc = 0x2AB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB87Cu;
    // 0x2ab880: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB87Cu, 0x2AB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB884u;
label_2ab884:
    // 0x2ab884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab888: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ab888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ab88c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AB88Cu;
    SET_GPR_U32(ctx, 31, 0x2AB894u);
    ctx->pc = 0x2AB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB88Cu;
    // 0x2ab890: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AB88Cu, 0x2AB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB894u;
label_2ab894:
    // 0x2ab894: 0xc604002c  lwc1        $f4, 0x2C($s0)
    ctx->pc = 0x2ab894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab898: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x2ab898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab89c: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x2ab89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x2ab8a0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2ab8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab8a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2ab8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2ab8a8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2ab8a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ab8ac: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2ab8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ab8b0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x2ab8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2ab8b4: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2ab8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab8b8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2ab8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ab8bc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2ab8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2ab8c0: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x2ab8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ab8c4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2ab8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ab8c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ab8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ab8cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8d0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2ab8d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ab8d4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2ab8d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ab8d8: 0xe7b70010  swc1        $f23, 0x10($sp)
    ctx->pc = 0x2ab8d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab8dc: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x2ab8dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ab8e0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2ab8e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ab8e4: 0xe7b8001c  swc1        $f24, 0x1C($sp)
    ctx->pc = 0x2ab8e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ab8e8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2ab8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ab8ec: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2ab8ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ab8f0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2ab8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2ab8f4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2ab8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2ab8f8: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x2ab8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x2ab8fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ab8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ab900: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ab900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ab904: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2ab904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab908: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ab908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab90c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2ab90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2ab910: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab914: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2ab914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2ab918: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ab918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab91c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ab91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ab920: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2ab920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab924: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2ab924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2ab928: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ab928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ab92c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2ab92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2ab930: 0xc0a9c48  jal         func_2A7120
    ctx->pc = 0x2AB930u;
    SET_GPR_U32(ctx, 31, 0x2AB938u);
    ctx->pc = 0x2AB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB930u;
    // 0x2ab934: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7120u, 0x2AB930u, 0x2AB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB938u;
label_2ab938:
    // 0x2ab938: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2AB938u;
    SET_GPR_U32(ctx, 31, 0x2AB940u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2AB938u, 0x2AB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB940u;
label_2ab940:
    // 0x2ab940: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2AB940u;
    {
        const bool branch_taken_0x2ab940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB940u;
        // 0x2ab944: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab940) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB948u;
label_2ab948:
    // 0x2ab948: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AB948u;
    {
        const bool branch_taken_0x2ab948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB948u;
        // 0x2ab94c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab948) {
            ctx->pc = 0x2AB9C0u;
            goto label_2ab9c0;
        }
    }
    ctx->pc = 0x2AB950u;
    // 0x2ab950: 0x8e2700b4  lw          $a3, 0xB4($s1)
    ctx->pc = 0x2ab950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ab954: 0x18e00044  blez        $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AB954u;
    {
        const bool branch_taken_0x2ab954 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB954u;
        // 0x2ab958: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab954) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB95Cu;
    // 0x2ab95c: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x2ab95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x2ab960: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2ab960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2ab964: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2ab964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ab968: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2ab96c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ab96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ab970: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x2ab970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2ab974: 0x863024  and         $a2, $a0, $a2
    ctx->pc = 0x2ab974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2ab978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab97c: 0x262200b8  addiu       $v0, $s1, 0xB8
    ctx->pc = 0x2ab97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2ab980: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2ab980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2ab984: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ab984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ab988: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2ab988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2ab98c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2ab98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2ab990: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2ab990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2ab994: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2ab994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2ab998: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab99c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2ab99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2ab9a0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ab9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab9a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2ab9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ab9a8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2ab9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab9ac: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2ab9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2ab9b0: 0xc0a9b38  jal         func_2A6CE0
    ctx->pc = 0x2AB9B0u;
    SET_GPR_U32(ctx, 31, 0x2AB9B8u);
    ctx->pc = 0x2AB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9B0u;
    // 0x2ab9b4: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6CE0u, 0x2AB9B0u, 0x2AB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9B8u;
label_2ab9b8:
    // 0x2ab9b8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2AB9B8u;
    {
        const bool branch_taken_0x2ab9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9B8u;
        // 0x2ab9bc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9b8) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB9C0u;
label_2ab9c0:
    // 0x2ab9c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AB9C0u;
    {
        const bool branch_taken_0x2ab9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9C0u;
        // 0x2ab9c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9c0) {
            ctx->pc = 0x2AB9E8u;
            goto label_2ab9e8;
        }
    }
    ctx->pc = 0x2AB9C8u;
    // 0x2ab9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9cc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2ab9ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2ab9d0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2ab9d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2ab9d4: 0xc0abb86  jal         func_2AEE18
    ctx->pc = 0x2AB9D4u;
    SET_GPR_U32(ctx, 31, 0x2AB9DCu);
    ctx->pc = 0x2AB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9D4u;
    // 0x2ab9d8: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE18u, 0x2AB9D4u, 0x2AB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9DCu;
label_2ab9dc:
    // 0x2ab9dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2AB9DCu;
    {
        const bool branch_taken_0x2ab9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9DCu;
        // 0x2ab9e0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9dc) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2AB9E4u;
    // 0x2ab9e4: 0x0  nop
    ctx->pc = 0x2ab9e4u;
    // NOP
label_2ab9e8:
    // 0x2ab9e8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x2ab9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2ab9ec: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AB9ECu;
    {
        const bool branch_taken_0x2ab9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9ec) {
            ctx->pc = 0x2AB9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB9ECu;
            // 0x2ab9f0: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA48u;
            goto label_2aba48;
        }
    }
    ctx->pc = 0x2AB9F4u;
    // 0x2ab9f4: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2AB9F4u;
    SET_GPR_U32(ctx, 31, 0x2AB9FCu);
    ctx->pc = 0x2AB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9F4u;
    // 0x2ab9f8: 0x263000b4  addiu       $s0, $s1, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2AB9F4u, 0x2AB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9FCu;
label_2ab9fc:
    // 0x2ab9fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ab9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aba00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABA00u;
    {
        const bool branch_taken_0x2aba00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA00u;
        // 0x2aba04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba00) {
            ctx->pc = 0x2ABA18u;
            goto label_2aba18;
        }
    }
    ctx->pc = 0x2ABA08u;
    // 0x2aba08: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x2ABA08u;
    SET_GPR_U32(ctx, 31, 0x2ABA10u);
    ctx->pc = 0x2ABA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA08u;
    // 0x2aba0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    goto label_2ab738;
    ctx->pc = 0x2ABA10u;
label_2aba10:
    // 0x2aba10: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x2ABA10u;
    {
        const bool branch_taken_0x2aba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba10) {
            ctx->pc = 0x2AB938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab938;
        }
    }
    ctx->pc = 0x2ABA18u;
label_2aba18:
    // 0x2aba18: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABA18u;
    {
        const bool branch_taken_0x2aba18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aba18) {
            ctx->pc = 0x2ABA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABA18u;
            // 0x2aba1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA30u;
            goto label_2aba30;
        }
    }
    ctx->pc = 0x2ABA20u;
    // 0x2aba20: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x2ABA20u;
    SET_GPR_U32(ctx, 31, 0x2ABA28u);
    ctx->pc = 0x2ABA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA20u;
    // 0x2aba24: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    goto label_2ab738;
    ctx->pc = 0x2ABA28u;
label_2aba28:
    // 0x2aba28: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x2ABA28u;
    {
        const bool branch_taken_0x2aba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba28) {
            ctx->pc = 0x2AB938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab938;
        }
    }
    ctx->pc = 0x2ABA30u;
label_2aba30:
    // 0x2aba30: 0x1462ffc1  bne         $v1, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2ABA30u;
    {
        const bool branch_taken_0x2aba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aba30) {
            ctx->pc = 0x2AB938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab938;
        }
    }
    ctx->pc = 0x2ABA38u;
    // 0x2aba38: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x2ABA38u;
    SET_GPR_U32(ctx, 31, 0x2ABA40u);
    ctx->pc = 0x2ABA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA38u;
    // 0x2aba3c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    goto label_2ab738;
    ctx->pc = 0x2ABA40u;
label_2aba40:
    // 0x2aba40: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x2ABA40u;
    {
        const bool branch_taken_0x2aba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba40) {
            ctx->pc = 0x2AB938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab938;
        }
    }
    ctx->pc = 0x2ABA48u;
label_2aba48:
    // 0x2aba48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABA48u;
    {
        const bool branch_taken_0x2aba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA48u;
        // 0x2aba4c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba48) {
            ctx->pc = 0x2ABA68u;
            goto label_2aba68;
        }
    }
    ctx->pc = 0x2ABA50u;
    // 0x2aba50: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2aba54: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2aba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2aba58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2aba58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aba5c: 0xc0a9cd2  jal         func_2A7348
    ctx->pc = 0x2ABA5Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA64u);
    ctx->pc = 0x2ABA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA5Cu;
    // 0x2aba60: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7348u, 0x2ABA5Cu, 0x2ABA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA64u;
label_2aba64:
    // 0x2aba64: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2aba64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2aba68:
    // 0x2aba68: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2aba68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2aba6c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2aba6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aba70: 0xc7b80098  lwc1        $f24, 0x98($sp)
    ctx->pc = 0x2aba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2aba74: 0xc7b70090  lwc1        $f23, 0x90($sp)
    ctx->pc = 0x2aba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2aba78: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x2aba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aba7c: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x2aba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aba80: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x2aba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aba84: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA84u;
        // 0x2aba88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA8Cu;
    // 0x2aba8c: 0x0  nop
    ctx->pc = 0x2aba8cu;
    // NOP
    ctx->pc = 0x2aba90u;
}
