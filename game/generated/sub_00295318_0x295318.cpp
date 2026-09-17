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

// Function: sub_00295318
// Address: 0x295318 - 0x295a58
void sub_00295318_0x295318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295318_0x295318");
#endif

    switch (ctx->pc) {
        case 0x2953a8u: goto label_2953a8;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953f4u: goto label_2953f4;
        case 0x295410u: goto label_295410;
        case 0x295424u: goto label_295424;
        case 0x295444u: goto label_295444;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954d4u: goto label_2954d4;
        case 0x295510u: goto label_295510;
        case 0x295574u: goto label_295574;
        case 0x295620u: goto label_295620;
        case 0x295630u: goto label_295630;
        case 0x295640u: goto label_295640;
        case 0x295660u: goto label_295660;
        case 0x29566cu: goto label_29566c;
        case 0x295678u: goto label_295678;
        case 0x295684u: goto label_295684;
        case 0x295700u: goto label_295700;
        case 0x295778u: goto label_295778;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957e8u: goto label_2957e8;
        case 0x295820u: goto label_295820;
        case 0x295840u: goto label_295840;
        case 0x29587cu: goto label_29587c;
        case 0x29588cu: goto label_29588c;
        case 0x295980u: goto label_295980;
        case 0x295a1cu: goto label_295a1c;
        default: break;
    }

    ctx->pc = 0x295318u;

    // 0x295318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29531c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295320: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x295320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x295324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295328: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x295328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29532c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x295330: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x295330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x295334: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x295334u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x295338: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x295338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29533c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x29533cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x295340: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295344: 0x108001ba  beqz        $a0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x295344u;
    {
        const bool branch_taken_0x295344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295344u;
        // 0x295348: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295344) {
            ctx->pc = 0x295A30u;
            goto label_295a30;
        }
    }
    ctx->pc = 0x29534Cu;
    // 0x29534c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x29534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x295350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295354: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x295354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x295358: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x295358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x29535c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x295360: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x295360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x295364: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x295364u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x295368: 0x1223005f  beq         $s1, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x295368u;
    {
        const bool branch_taken_0x295368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x29536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295368u;
        // 0x29536c: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295368) {
            ctx->pc = 0x2954E8u;
            goto label_2954e8;
        }
    }
    ctx->pc = 0x295370u;
    // 0x295370: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x295370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x295374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295374u;
    {
        const bool branch_taken_0x295374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295374u;
        // 0x295378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295374) {
            ctx->pc = 0x295390u;
            goto label_295390;
        }
    }
    ctx->pc = 0x29537Cu;
    // 0x29537c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29537Cu;
    {
        const bool branch_taken_0x29537c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29537c) {
            ctx->pc = 0x2953A0u;
            goto label_2953a0;
        }
    }
    ctx->pc = 0x295384u;
    // 0x295384: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x295384u;
    {
        const bool branch_taken_0x295384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295384u;
        // 0x295388: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295384) {
            ctx->pc = 0x295A34u;
            goto label_295a34;
        }
    }
    ctx->pc = 0x29538Cu;
    // 0x29538c: 0x0  nop
    ctx->pc = 0x29538cu;
    // NOP
label_295390:
    // 0x295390: 0x52220097  beql        $s1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x295390u;
    {
        const bool branch_taken_0x295390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x295390) {
            ctx->pc = 0x295394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295390u;
            // 0x295394: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2955F0u;
            goto label_2955f0;
        }
    }
    ctx->pc = 0x295398u;
    // 0x295398: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x295398u;
    {
        const bool branch_taken_0x295398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295398u;
        // 0x29539c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295398) {
            ctx->pc = 0x295A34u;
            goto label_295a34;
        }
    }
    ctx->pc = 0x2953A0u;
label_2953a0:
    // 0x2953a0: 0xc0a5382  jal         func_294E08
    ctx->pc = 0x2953A0u;
    SET_GPR_U32(ctx, 31, 0x2953A8u);
    ctx->pc = 0x2953A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2953A0u;
    // 0x2953a4: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E08u, 0x2953A0u, 0x2953A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953A8u;
label_2953a8:
    // 0x2953a8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2953a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2953ac: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2953ACu;
    {
        const bool branch_taken_0x2953ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2953B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953ACu;
        // 0x2953b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953ac) {
            ctx->pc = 0x2954C0u;
            goto label_2954c0;
        }
    }
    ctx->pc = 0x2953B4u;
    // 0x2953b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2953B4u;
    {
        const bool branch_taken_0x2953b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2953B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953B4u;
        // 0x2953b8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953b4) {
            ctx->pc = 0x2953D0u;
            goto label_2953d0;
        }
    }
    ctx->pc = 0x2953BCu;
    // 0x2953bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2953c0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2953C0u;
    {
        const bool branch_taken_0x2953c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2953c0) {
            ctx->pc = 0x295400u;
            goto label_295400;
        }
    }
    ctx->pc = 0x2953C8u;
    // 0x2953c8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2953C8u;
    {
        const bool branch_taken_0x2953c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953C8u;
        // 0x2953cc: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953c8) {
            ctx->pc = 0x2954C8u;
            goto label_2954c8;
        }
    }
    ctx->pc = 0x2953D0u;
label_2953d0:
    // 0x2953d0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2953d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2953d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2953d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2953d8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x2953D8u;
    SET_GPR_U32(ctx, 31, 0x2953E0u);
    ctx->pc = 0x2953DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2953D8u;
    // 0x2953dc: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x2953D8u, 0x2953E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953E0u;
label_2953e0:
    // 0x2953e0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2953e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2953e4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2953e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2953e8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2953ec: 0xc0a5450  jal         func_295140
    ctx->pc = 0x2953ECu;
    SET_GPR_U32(ctx, 31, 0x2953F4u);
    ctx->pc = 0x2953F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2953ECu;
    // 0x2953f0: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295140u, 0x2953ECu, 0x2953F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953F4u;
label_2953f4:
    // 0x2953f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2953F4u;
    {
        const bool branch_taken_0x2953f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953F4u;
        // 0x2953f8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953f4) {
            ctx->pc = 0x2954C4u;
            goto label_2954c4;
        }
    }
    ctx->pc = 0x2953FCu;
    // 0x2953fc: 0x0  nop
    ctx->pc = 0x2953fcu;
    // NOP
label_295400:
    // 0x295400: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x295400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x295404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x295404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295408: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x295408u;
    SET_GPR_U32(ctx, 31, 0x295410u);
    ctx->pc = 0x29540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295408u;
    // 0x29540c: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x295408u, 0x295410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295410u;
label_295410:
    // 0x295410: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295414: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x295414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x295418: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x295418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29541c: 0xc0a5450  jal         func_295140
    ctx->pc = 0x29541Cu;
    SET_GPR_U32(ctx, 31, 0x295424u);
    ctx->pc = 0x295420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29541Cu;
    // 0x295420: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295140u, 0x29541Cu, 0x295424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295424u;
label_295424:
    // 0x295424: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x295424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x295428: 0x8c47b7d4  lw          $a3, -0x482C($v0)
    ctx->pc = 0x295428u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3BB7D4u));
    // 0x29542c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29542Cu;
    {
        const bool branch_taken_0x29542c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x295430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29542Cu;
        // 0x295430: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29542c) {
            ctx->pc = 0x295450u;
            goto label_295450;
        }
    }
    ctx->pc = 0x295434u;
    // 0x295434: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295438: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x295438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29543c: 0xc0a53d6  jal         func_294F58
    ctx->pc = 0x29543Cu;
    SET_GPR_U32(ctx, 31, 0x295444u);
    ctx->pc = 0x295440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29543Cu;
    // 0x295440: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F58u, 0x29543Cu, 0x295444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295444u;
label_295444:
    // 0x295444: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x295444u;
    {
        const bool branch_taken_0x295444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295444u;
        // 0x295448: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295444) {
            ctx->pc = 0x2954C4u;
            goto label_2954c4;
        }
    }
    ctx->pc = 0x29544Cu;
    // 0x29544c: 0x0  nop
    ctx->pc = 0x29544cu;
    // NOP
label_295450:
    // 0x295450: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295454: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x295454u;
    {
        const bool branch_taken_0x295454 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x295458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295454u;
        // 0x295458: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295454) {
            ctx->pc = 0x295468u;
            goto label_295468;
        }
    }
    ctx->pc = 0x29545Cu;
    // 0x29545c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x29545cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295460u;
    {
        const bool branch_taken_0x295460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295460u;
        // 0x295464: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295460) {
            ctx->pc = 0x295480u;
            goto label_295480;
        }
    }
    ctx->pc = 0x295468u;
label_295468:
    // 0x295468: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x295468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x29546c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x29546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x295470: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295478: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x295478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29547c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x29547cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_295480:
    // 0x295480: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x295480u;
    {
        const bool branch_taken_0x295480 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x295484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295480u;
        // 0x295484: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295480) {
            ctx->pc = 0x295498u;
            goto label_295498;
        }
    }
    ctx->pc = 0x295488u;
    // 0x295488: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x295488u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29548c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29548Cu;
    {
        const bool branch_taken_0x29548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29548Cu;
        // 0x295490: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29548c) {
            ctx->pc = 0x2954ACu;
            goto label_2954ac;
        }
    }
    ctx->pc = 0x295494u;
    // 0x295494: 0x0  nop
    ctx->pc = 0x295494u;
    // NOP
label_295498:
    // 0x295498: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x295498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x29549c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2954a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2954a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2954a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2954a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2954a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2954a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2954ac:
    // 0x2954ac: 0x0  nop
    ctx->pc = 0x2954acu;
    // NOP
    // 0x2954b0: 0x0  nop
    ctx->pc = 0x2954b0u;
    // NOP
    // 0x2954b4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2954b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2954b8: 0xc0a53d6  jal         func_294F58
    ctx->pc = 0x2954B8u;
    SET_GPR_U32(ctx, 31, 0x2954C0u);
    ctx->pc = 0x294F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F58u, 0x2954B8u, 0x2954C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954C0u;
label_2954c0:
    // 0x2954c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2954c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2954c4:
    // 0x2954c4: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x2954c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2954c8:
    // 0x2954c8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2954c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2954cc: 0xc0a531e  jal         func_294C78
    ctx->pc = 0x2954CCu;
    SET_GPR_U32(ctx, 31, 0x2954D4u);
    ctx->pc = 0x2954D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954CCu;
    // 0x2954d0: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C78u, 0x2954CCu, 0x2954D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954D4u;
label_2954d4:
    // 0x2954d4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2954d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2954d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2954dc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2954DCu;
    {
        const bool branch_taken_0x2954dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954DCu;
        // 0x2954e0: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954dc) {
            ctx->pc = 0x295690u;
            goto label_295690;
        }
    }
    ctx->pc = 0x2954E4u;
    // 0x2954e4: 0x0  nop
    ctx->pc = 0x2954e4u;
    // NOP
label_2954e8:
    // 0x2954e8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2954e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2954ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2954ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2954f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2954F0u;
    {
        const bool branch_taken_0x2954f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954F0u;
        // 0x2954f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954f0) {
            ctx->pc = 0x295520u;
            goto label_295520;
        }
    }
    ctx->pc = 0x2954F8u;
    // 0x2954f8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2954f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2954fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2954fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295504: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x295504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x295508: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x295508u;
    SET_GPR_U32(ctx, 31, 0x295510u);
    ctx->pc = 0x29550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295508u;
    // 0x29550c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x295508u, 0x295510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295510u;
label_295510:
    // 0x295510: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x295510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295514: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x295514u;
    {
        const bool branch_taken_0x295514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295514u;
        // 0x295518: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295514) {
            ctx->pc = 0x295558u;
            goto label_295558;
        }
    }
    ctx->pc = 0x29551Cu;
    // 0x29551c: 0x0  nop
    ctx->pc = 0x29551cu;
    // NOP
label_295520:
    // 0x295520: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x295520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x295524: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x295524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x295528: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x295528u;
    {
        const bool branch_taken_0x295528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295528) {
            ctx->pc = 0x29552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295528u;
            // 0x29552c: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29555Cu;
            goto label_29555c;
        }
    }
    ctx->pc = 0x295530u;
    // 0x295530: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x295530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x295534: 0xc7818fec  lwc1        $f1, -0x7014($gp)
    ctx->pc = 0x295534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29553c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29553cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x295540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x295544: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x295544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295548: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x295548u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29554c: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x29554cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295550: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x295550u;
    {
        const bool branch_taken_0x295550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295550) {
            ctx->pc = 0x295554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295550u;
            // 0x295554: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x295558u;
            goto label_295558;
        }
    }
    ctx->pc = 0x295558u;
label_295558:
    // 0x295558: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x295558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_29555c:
    // 0x29555c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x295560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295564: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x295564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x295568: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x295568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x29556c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29556Cu;
    SET_GPR_U32(ctx, 31, 0x295574u);
    ctx->pc = 0x295570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29556Cu;
    // 0x295570: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29556Cu, 0x295574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295574u;
label_295574:
    // 0x295574: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x295574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x295578: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x295578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x29557c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29557Cu;
    {
        const bool branch_taken_0x29557c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29557Cu;
        // 0x295580: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29557c) {
            ctx->pc = 0x2955ACu;
            goto label_2955ac;
        }
    }
    ctx->pc = 0x295584u;
    // 0x295584: 0x2462fff1  addiu       $v0, $v1, -0xF
    ctx->pc = 0x295584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x295588: 0xc7818ff0  lwc1        $f1, -0x7010($gp)
    ctx->pc = 0x295588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29558c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29558cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x295594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x295598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x295598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29559c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x29559cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2955a0: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2955a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2955a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2955A4u;
    {
        const bool branch_taken_0x2955a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2955a4) {
            ctx->pc = 0x2955A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2955A4u;
            // 0x2955a8: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2955ACu;
            goto label_2955ac;
        }
    }
    ctx->pc = 0x2955ACu;
label_2955ac:
    // 0x2955ac: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2955acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2955b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2955B0u;
    {
        const bool branch_taken_0x2955b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2955b0) {
            ctx->pc = 0x2955B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2955B0u;
            // 0x2955b4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2955D0u;
            goto label_2955d0;
        }
    }
    ctx->pc = 0x2955B8u;
    // 0x2955b8: 0x28620096  slti        $v0, $v1, 0x96
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2955bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2955BCu;
    {
        const bool branch_taken_0x2955bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955BCu;
        // 0x2955c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955bc) {
            ctx->pc = 0x2955E4u;
            goto label_2955e4;
        }
    }
    ctx->pc = 0x2955C4u;
    // 0x2955c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2955C4u;
    {
        const bool branch_taken_0x2955c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955c4) {
            ctx->pc = 0x295690u;
            goto label_295690;
        }
    }
    ctx->pc = 0x2955CCu;
    // 0x2955cc: 0x0  nop
    ctx->pc = 0x2955ccu;
    // NOP
label_2955d0:
    // 0x2955d0: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x2955d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2955d4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2955d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2955d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2955d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2955dc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2955DCu;
    {
        const bool branch_taken_0x2955dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955DCu;
        // 0x2955e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955dc) {
            ctx->pc = 0x295690u;
            goto label_295690;
        }
    }
    ctx->pc = 0x2955E4u;
label_2955e4:
    // 0x2955e4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2955e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2955e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2955E8u;
    {
        const bool branch_taken_0x2955e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955E8u;
        // 0x2955ec: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955e8) {
            ctx->pc = 0x295690u;
            goto label_295690;
        }
    }
    ctx->pc = 0x2955F0u;
label_2955f0:
    // 0x2955f0: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x2955f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2955f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2955F4u;
    {
        const bool branch_taken_0x2955f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955f4) {
            ctx->pc = 0x295658u;
            goto label_295658;
        }
    }
    ctx->pc = 0x2955FCu;
    // 0x2955fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2955fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x295600: 0xc7818ff4  lwc1        $f1, -0x700C($gp)
    ctx->pc = 0x295600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295604: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x295604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295608: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x295608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x29560c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29560cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295614: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x295614u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295618: 0xc0a53c6  jal         func_294F18
    ctx->pc = 0x295618u;
    SET_GPR_U32(ctx, 31, 0x295620u);
    ctx->pc = 0x29561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295618u;
    // 0x29561c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F18u, 0x295618u, 0x295620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295620u;
label_295620:
    // 0x295620: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295624: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x295624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x295628: 0xc0a54a4  jal         func_295290
    ctx->pc = 0x295628u;
    SET_GPR_U32(ctx, 31, 0x295630u);
    ctx->pc = 0x29562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295628u;
    // 0x29562c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295290u, 0x295628u, 0x295630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295630u;
label_295630:
    // 0x295630: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295634: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x295638: 0xc0a5372  jal         func_294DC8
    ctx->pc = 0x295638u;
    SET_GPR_U32(ctx, 31, 0x295640u);
    ctx->pc = 0x29563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295638u;
    // 0x29563c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294DC8u, 0x295638u, 0x295640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295640u;
label_295640:
    // 0x295640: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x295640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x295644: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x295644u;
    {
        const bool branch_taken_0x295644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x295644) {
            ctx->pc = 0x295648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295644u;
            // 0x295648: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29564Cu;
            goto label_29564c;
        }
    }
    ctx->pc = 0x29564Cu;
label_29564c:
    // 0x29564c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29564Cu;
    {
        const bool branch_taken_0x29564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29564Cu;
        // 0x295650: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29564c) {
            ctx->pc = 0x295690u;
            goto label_295690;
        }
    }
    ctx->pc = 0x295654u;
    // 0x295654: 0x0  nop
    ctx->pc = 0x295654u;
    // NOP
label_295658:
    // 0x295658: 0xc0a53a4  jal         func_294E90
    ctx->pc = 0x295658u;
    SET_GPR_U32(ctx, 31, 0x295660u);
    ctx->pc = 0x29565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295658u;
    // 0x29565c: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E90u, 0x295658u, 0x295660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295660u;
label_295660:
    // 0x295660: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295664: 0xc0a5482  jal         func_295208
    ctx->pc = 0x295664u;
    SET_GPR_U32(ctx, 31, 0x29566Cu);
    ctx->pc = 0x295668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295664u;
    // 0x295668: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295208u, 0x295664u, 0x29566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29566Cu;
label_29566c:
    // 0x29566c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x29566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295670: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295670u;
    SET_GPR_U32(ctx, 31, 0x295678u);
    ctx->pc = 0x295674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295670u;
    // 0x295674: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D40u, 0x295670u, 0x295678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295678u;
label_295678:
    // 0x295678: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x29567c: 0xc0a53f0  jal         func_294FC0
    ctx->pc = 0x29567Cu;
    SET_GPR_U32(ctx, 31, 0x295684u);
    ctx->pc = 0x295680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29567Cu;
    // 0x295680: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294FC0u, 0x29567Cu, 0x295684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295684u;
label_295684:
    // 0x295684: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x295684u;
    {
        const bool branch_taken_0x295684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295684u;
        // 0x295688: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295684) {
            ctx->pc = 0x295A30u;
            goto label_295a30;
        }
    }
    ctx->pc = 0x29568Cu;
    // 0x29568c: 0x0  nop
    ctx->pc = 0x29568cu;
    // NOP
label_295690:
    // 0x295690: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x295690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x295694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295698: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x295698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29569c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29569cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2956a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2956a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2956a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2956a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2956a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2956a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2956ac: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2956acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2956b0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2956B0u;
    {
        const bool branch_taken_0x2956b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2956b0) {
            ctx->pc = 0x2956B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2956B0u;
            // 0x2956b4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2956D0u;
            goto label_2956d0;
        }
    }
    ctx->pc = 0x2956B8u;
    // 0x2956b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2956b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2956bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2956bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2956c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2956c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2956c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2956c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2956c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2956c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2956cc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2956ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2956d0:
    // 0x2956d0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2956d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2956d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2956d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2956dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2956e0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2956e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2956e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2956e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2956e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2956ec: 0x8c470134  lw          $a3, 0x134($v0)
    ctx->pc = 0x2956ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2956f0: 0xa38825  or          $s1, $a1, $v1
    ctx->pc = 0x2956f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2956f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2956f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2956f8: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2956F8u;
    SET_GPR_U32(ctx, 31, 0x295700u);
    ctx->pc = 0x2956FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2956F8u;
    // 0x2956fc: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2956F8u, 0x295700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295700u;
label_295700:
    // 0x295700: 0x8f85b5c0  lw          $a1, -0x4A40($gp)
    ctx->pc = 0x295700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948288)));
    // 0x295704: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x295704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295708: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x295708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29570c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x29570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x295710: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x295718: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x295718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29571c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295724: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x295728: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x295728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29572c: 0x90640080  lbu         $a0, 0x80($v1)
    ctx->pc = 0x29572cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x295730: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x295730u;
    {
        const bool branch_taken_0x295730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x295734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295730u;
        // 0x295734: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295730) {
            ctx->pc = 0x295744u;
            goto label_295744;
        }
    }
    ctx->pc = 0x295738u;
    // 0x295738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29573c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29573Cu;
    {
        const bool branch_taken_0x29573c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29573c) {
            ctx->pc = 0x295748u;
            goto label_295748;
        }
    }
    ctx->pc = 0x295744u;
label_295744:
    // 0x295744: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x295744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295748:
    // 0x295748: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29574c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29574cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x295750: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295754: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x295758: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29575c: 0x2484ba00  addiu       $a0, $a0, -0x4600
    ctx->pc = 0x29575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949376));
    // 0x295760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295764: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x295764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x295768: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29576c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295770: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x295770u;
    SET_GPR_U32(ctx, 31, 0x295778u);
    ctx->pc = 0x295774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295770u;
    // 0x295774: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x295770u, 0x295778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295778u;
label_295778:
    // 0x295778: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x295778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x29577c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295780: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x295780u;
    {
        const bool branch_taken_0x295780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x295784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295780u;
        // 0x295784: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295780) {
            ctx->pc = 0x2957F0u;
            goto label_2957f0;
        }
    }
    ctx->pc = 0x295788u;
    // 0x295788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295788u;
    {
        const bool branch_taken_0x295788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295788u;
        // 0x29578c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295788) {
            ctx->pc = 0x2957A0u;
            goto label_2957a0;
        }
    }
    ctx->pc = 0x295790u;
    // 0x295790: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x295790u;
    {
        const bool branch_taken_0x295790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295790) {
            ctx->pc = 0x295794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295790u;
            // 0x295794: 0x8f82b5bc  lw          $v0, -0x4A44($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2957B0u;
            goto label_2957b0;
        }
    }
    ctx->pc = 0x295798u;
    // 0x295798: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x295798u;
    {
        const bool branch_taken_0x295798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295798) {
            ctx->pc = 0x295894u;
            goto label_295894;
        }
    }
    ctx->pc = 0x2957A0u;
label_2957a0:
    // 0x2957a0: 0x50820029  beql        $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2957A0u;
    {
        const bool branch_taken_0x2957a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2957a0) {
            ctx->pc = 0x2957A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2957A0u;
            // 0x2957a4: 0x8e080064  lw          $t0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295848u;
            goto label_295848;
        }
    }
    ctx->pc = 0x2957A8u;
    // 0x2957a8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2957A8u;
    {
        const bool branch_taken_0x2957a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957a8) {
            ctx->pc = 0x295894u;
            goto label_295894;
        }
    }
    ctx->pc = 0x2957B0u;
label_2957b0:
    // 0x2957b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2957b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2957b4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2957b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2957b8: 0x24420148  addiu       $v0, $v0, 0x148
    ctx->pc = 0x2957b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x2957bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2957bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2957c0: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x2957C0u;
    SET_GPR_U32(ctx, 31, 0x2957C8u);
    ctx->pc = 0x2957C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957C0u;
    // 0x2957c4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x2957C0u, 0x2957C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957C8u;
label_2957c8:
    // 0x2957c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2957c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2957cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2957ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2957d0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2957d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2957d4: 0x2484ba10  addiu       $a0, $a0, -0x45F0
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949392));
    // 0x2957d8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2957d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2957dc: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x2957dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2957e0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2957E0u;
    SET_GPR_U32(ctx, 31, 0x2957E8u);
    ctx->pc = 0x2957E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957E0u;
    // 0x2957e4: 0x8fa9001c  lw          $t1, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2957E0u, 0x2957E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957E8u;
label_2957e8:
    // 0x2957e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2957E8u;
    {
        const bool branch_taken_0x2957e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957E8u;
        // 0x2957ec: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957e8) {
            ctx->pc = 0x295890u;
            goto label_295890;
        }
    }
    ctx->pc = 0x2957F0u;
label_2957f0:
    // 0x2957f0: 0x8f82b5bc  lw          $v0, -0x4A44($gp)
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948284)));
    // 0x2957f4: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2957f8: 0x24450148  addiu       $a1, $v0, 0x148
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x2957fc: 0x14e4000a  bne         $a3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2957FCu;
    {
        const bool branch_taken_0x2957fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x295800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957FCu;
        // 0x295800: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957fc) {
            ctx->pc = 0x295828u;
            goto label_295828;
        }
    }
    ctx->pc = 0x295804u;
    // 0x295804: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x295804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295808: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x295808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29580c: 0x2484ba28  addiu       $a0, $a0, -0x45D8
    ctx->pc = 0x29580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949416));
    // 0x295810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x295810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295814: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295818: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x295818u;
    SET_GPR_U32(ctx, 31, 0x295820u);
    ctx->pc = 0x29581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295818u;
    // 0x29581c: 0x24c90002  addiu       $t1, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x295818u, 0x295820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295820u;
label_295820:
    // 0x295820: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x295820u;
    {
        const bool branch_taken_0x295820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295820u;
        // 0x295824: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295820) {
            ctx->pc = 0x295890u;
            goto label_295890;
        }
    }
    ctx->pc = 0x295828u;
label_295828:
    // 0x295828: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x295828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29582c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29582cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x295830: 0x2484ba38  addiu       $a0, $a0, -0x45C8
    ctx->pc = 0x295830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    // 0x295834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295838: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x295838u;
    SET_GPR_U32(ctx, 31, 0x295840u);
    ctx->pc = 0x29583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295838u;
    // 0x29583c: 0x24c90002  addiu       $t1, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x295838u, 0x295840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295840u;
label_295840:
    // 0x295840: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x295840u;
    {
        const bool branch_taken_0x295840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295840u;
        // 0x295844: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295840) {
            ctx->pc = 0x295890u;
            goto label_295890;
        }
    }
    ctx->pc = 0x295848u;
label_295848:
    // 0x295848: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x295848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29584c: 0x8f82b5bc  lw          $v0, -0x4A44($gp)
    ctx->pc = 0x29584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948284)));
    // 0x295850: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x295850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x295854: 0x103001b  divu        $zero, $t0, $v1
    ctx->pc = 0x295854u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x295858: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x295858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29585c: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x29585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x295860: 0x2484ba50  addiu       $a0, $a0, -0x45B0
    ctx->pc = 0x295860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949456));
    // 0x295864: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295868: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29586c: 0x4012  mflo        $t0
    ctx->pc = 0x29586cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x295870: 0x4810  mfhi        $t1
    ctx->pc = 0x295870u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x295874: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x295874u;
    SET_GPR_U32(ctx, 31, 0x29587Cu);
    ctx->pc = 0x295878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295874u;
    // 0x295878: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x295874u, 0x29587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29587Cu;
label_29587c:
    // 0x29587c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295880: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x295880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x295884: 0xc0a5412  jal         func_295048
    ctx->pc = 0x295884u;
    SET_GPR_U32(ctx, 31, 0x29588Cu);
    ctx->pc = 0x295888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295884u;
    // 0x295888: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295048u, 0x295884u, 0x29588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29588Cu;
label_29588c:
    // 0x29588c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x29588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_295890:
    // 0x295890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x295890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_295894:
    // 0x295894: 0x50820062  beql        $a0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x295894u;
    {
        const bool branch_taken_0x295894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x295894) {
            ctx->pc = 0x295898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295894u;
            // 0x295898: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295A20u;
            goto label_295a20;
        }
    }
    ctx->pc = 0x29589Cu;
    // 0x29589c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x29589Cu;
    {
        const bool branch_taken_0x29589c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2958A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29589Cu;
        // 0x2958a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29589c) {
            ctx->pc = 0x2958D0u;
            goto label_2958d0;
        }
    }
    ctx->pc = 0x2958A4u;
    // 0x2958a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2958a8: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x2958a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x2958ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2958acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x2958b0: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x2958b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x2958b4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2958b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2958b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2958B8u;
    {
        const bool branch_taken_0x2958b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2958BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958B8u;
        // 0x2958bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958b8) {
            ctx->pc = 0x2958D0u;
            goto label_2958d0;
        }
    }
    ctx->pc = 0x2958C0u;
    // 0x2958c0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2958c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2958c4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2958c8: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2958C8u;
    {
        const bool branch_taken_0x2958c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958C8u;
        // 0x2958cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958c8) {
            ctx->pc = 0x295A1Cu;
            goto label_295a1c;
        }
    }
    ctx->pc = 0x2958D0u;
label_2958d0:
    // 0x2958d0: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2958D0u;
    {
        const bool branch_taken_0x2958d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2958D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958D0u;
        // 0x2958d4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d0) {
            ctx->pc = 0x295900u;
            goto label_295900;
        }
    }
    ctx->pc = 0x2958D8u;
    // 0x2958d8: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x2958d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x2958dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2958dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2958e0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2958e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2958e4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2958e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2958e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2958E8u;
    {
        const bool branch_taken_0x2958e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2958e8) {
            ctx->pc = 0x295900u;
            goto label_295900;
        }
    }
    ctx->pc = 0x2958F0u;
    // 0x2958f0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2958f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2958f4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2958f8: 0x50620049  beql        $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2958F8u;
    {
        const bool branch_taken_0x2958f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2958f8) {
            ctx->pc = 0x2958FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2958F8u;
            // 0x2958fc: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295A20u;
            goto label_295a20;
        }
    }
    ctx->pc = 0x295900u;
label_295900:
    // 0x295900: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x295900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x295904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295908: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x295908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29590c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29590cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295910: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x295910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x295914: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x295914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295918: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29591c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x29591cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x295920: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x295920u;
    {
        const bool branch_taken_0x295920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295920) {
            ctx->pc = 0x295924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295920u;
            // 0x295924: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295940u;
            goto label_295940;
        }
    }
    ctx->pc = 0x295928u;
    // 0x295928: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x295928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x29592c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295930: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295934: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x295934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x295938: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x295938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x29593c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x29593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_295940:
    // 0x295940: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x295940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x295944: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x295944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295948: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x295948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29594c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295950: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x295950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x295954: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29595c: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x29595cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x295960: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x295964: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x295964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295968: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x295968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29596c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x29596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x295970: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x295970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295974: 0x1238825  or          $s1, $t1, $v1
    ctx->pc = 0x295974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x295978: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x295978u;
    SET_GPR_U32(ctx, 31, 0x295980u);
    ctx->pc = 0x29597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295978u;
    // 0x29597c: 0xe8900a  movz        $s2, $a3, $t0 (Delay Slot)
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x295978u, 0x295980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295980u;
label_295980:
    // 0x295980: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x295980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x295984: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x295984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x295988: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x295988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29598c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29598Cu;
    {
        const bool branch_taken_0x29598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29598Cu;
        // 0x295990: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29598c) {
            ctx->pc = 0x2959A0u;
            goto label_2959a0;
        }
    }
    ctx->pc = 0x295994u;
    // 0x295994: 0x8f82b5c0  lw          $v0, -0x4A40($gp)
    ctx->pc = 0x295994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948288)));
    // 0x295998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295998u;
    {
        const bool branch_taken_0x295998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295998u;
        // 0x29599c: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295998) {
            ctx->pc = 0x2959A4u;
            goto label_2959a4;
        }
    }
    ctx->pc = 0x2959A0u;
label_2959a0:
    // 0x2959a0: 0x2483fff9  addiu       $v1, $a0, -0x7
    ctx->pc = 0x2959a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
label_2959a4:
    // 0x2959a4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2959a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2959a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2959a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2959ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2959acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2959b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2959b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2959b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2959b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2959b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2959bc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x2959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2959c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2959c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2959c4: 0x90640080  lbu         $a0, 0x80($v1)
    ctx->pc = 0x2959c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2959c8: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2959C8u;
    {
        const bool branch_taken_0x2959c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2959CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959C8u;
        // 0x2959cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959c8) {
            ctx->pc = 0x2959DCu;
            goto label_2959dc;
        }
    }
    ctx->pc = 0x2959D0u;
    // 0x2959d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2959d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2959d4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2959D4u;
    {
        const bool branch_taken_0x2959d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2959d4) {
            ctx->pc = 0x2959E0u;
            goto label_2959e0;
        }
    }
    ctx->pc = 0x2959DCu;
label_2959dc:
    // 0x2959dc: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x2959dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2959e0:
    // 0x2959e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2959e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2959e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2959e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2959e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2959e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2959ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2959ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2959f0: 0x8e0b0068  lw          $t3, 0x68($s0)
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2959f4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x2959f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2959f8: 0x2484ba60  addiu       $a0, $a0, -0x45A0
    ctx->pc = 0x2959f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949472));
    // 0x2959fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2959fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a04: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295a08: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x295a0c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x295a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a14: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x295A14u;
    SET_GPR_U32(ctx, 31, 0x295A1Cu);
    ctx->pc = 0x295A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A14u;
    // 0x295a18: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x295A14u, 0x295A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A1Cu;
label_295a1c:
    // 0x295a1c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295a20:
    // 0x295a20: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x295a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x295a24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x295a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x295a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x295a2c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x295a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_295a30:
    // 0x295a30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x295a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_295a34:
    // 0x295a34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x295a38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x295a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295a3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x295a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x295a40: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x295a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x295a44: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x295a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295a48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x295a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x295A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A4Cu;
        // 0x295a50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295A54u;
    // 0x295a54: 0x0  nop
    ctx->pc = 0x295a54u;
    // NOP
    ctx->pc = 0x295a58u;
}
