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

// Function: sub_002A98D8
// Address: 0x2a98d8 - 0x2a99f8
void sub_002A98D8_0x2a98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A98D8_0x2a98d8");
#endif

    switch (ctx->pc) {
        case 0x2a99e8u: goto label_2a99e8;
        default: break;
    }

    ctx->pc = 0x2a98d8u;

    // 0x2a98d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a98d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a98dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a98dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a98e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a98e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a98e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a98ec: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A98ECu;
    {
        const bool branch_taken_0x2a98ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98ECu;
        // 0x2a98f0: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98ec) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A98F4u;
    // 0x2a98f4: 0xc4520008  lwc1        $f18, 0x8($v0)
    ctx->pc = 0x2a98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2a98f8: 0x46009034  c.lt.s      $f18, $f0
    ctx->pc = 0x2a98f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a98fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A98FCu;
    {
        const bool branch_taken_0x2a98fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a98fc) {
            ctx->pc = 0x2A9910u;
            goto label_2a9910;
        }
    }
    ctx->pc = 0x2A9904u;
    // 0x2a9904: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2A9904u;
    {
        const bool branch_taken_0x2a9904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9904u;
        // 0x2a9908: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9904) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A990Cu;
    // 0x2a990c: 0x0  nop
    ctx->pc = 0x2a990cu;
    // NOP
label_2a9910:
    // 0x2a9910: 0x46019036  c.le.s      $f18, $f1
    ctx->pc = 0x2a9910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[18], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9914: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9914u;
    {
        const bool branch_taken_0x2a9914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9914) {
            ctx->pc = 0x2A9918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9914u;
            // 0x2a9918: 0xc4510004  lwc1        $f17, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9928u;
            goto label_2a9928;
        }
    }
    ctx->pc = 0x2A991Cu;
    // 0x2a991c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2A991Cu;
    {
        const bool branch_taken_0x2a991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A991Cu;
        // 0x2a9920: 0xc4600010  lwc1        $f0, 0x10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a991c) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A9924u;
    // 0x2a9924: 0x0  nop
    ctx->pc = 0x2a9924u;
    // NOP
label_2a9928:
    // 0x2a9928: 0x46110836  c.le.s      $f1, $f17
    ctx->pc = 0x2a9928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a992c: 0x4503002e  bc1tl       . + 4 + (0x2E << 2)
    ctx->pc = 0x2A992Cu;
    {
        const bool branch_taken_0x2a992c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a992c) {
            ctx->pc = 0x2A9930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A992Cu;
            // 0x2a9930: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A9934u;
    // 0x2a9934: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2a9934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a9938: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2a9938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a993c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A993Cu;
    {
        const bool branch_taken_0x2a993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A993Cu;
        // 0x2a9940: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a993c) {
            ctx->pc = 0x2A9970u;
            goto label_2a9970;
        }
    }
    ctx->pc = 0x2A9944u;
    // 0x2a9944: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x2a9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9948: 0x46119081  sub.s       $f2, $f18, $f17
    ctx->pc = 0x2a9948u;
    ctx->f[2] = FPU_SUB_S(ctx->f[18], ctx->f[17]);
    // 0x2a994c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9950: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x2a9950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x2a9954: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a9954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a9958: 0x0  nop
    ctx->pc = 0x2a9958u;
    // NOP
    // 0x2a995c: 0x0  nop
    ctx->pc = 0x2a995cu;
    // NOP
    // 0x2a9960: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a9960u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2a9964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a9964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9968: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A9968u;
    {
        const bool branch_taken_0x2a9968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9968u;
        // 0x2a996c: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9968) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A9970u;
label_2a9970:
    // 0x2a9970: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9970u;
    {
        const bool branch_taken_0x2a9970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9970) {
            ctx->pc = 0x2A9974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9970u;
            // 0x2a9974: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9990u;
            goto label_2a9990;
        }
    }
    ctx->pc = 0x2A9978u;
    // 0x2a9978: 0x46019036  c.le.s      $f18, $f1
    ctx->pc = 0x2a9978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[18], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a997c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2A997Cu;
    {
        const bool branch_taken_0x2a997c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a997c) {
            ctx->pc = 0x2A9980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A997Cu;
            // 0x2a9980: 0xc4600010  lwc1        $f0, 0x10($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A9984u;
    // 0x2a9984: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A9984u;
    {
        const bool branch_taken_0x2a9984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9984u;
        // 0x2a9988: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9984) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A998Cu;
    // 0x2a998c: 0x0  nop
    ctx->pc = 0x2a998cu;
    // NOP
label_2a9990:
    // 0x2a9990: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A9990u;
    {
        const bool branch_taken_0x2a9990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9990u;
        // 0x2a9994: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9990) {
            ctx->pc = 0x2A99ECu;
            goto label_2a99ec;
        }
    }
    ctx->pc = 0x2A9998u;
    // 0x2a9998: 0xc4730018  lwc1        $f19, 0x18($v1)
    ctx->pc = 0x2a9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2a999c: 0xc470001c  lwc1        $f16, 0x1C($v1)
    ctx->pc = 0x2a999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a99a0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2a99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a99a4: 0xc46f0024  lwc1        $f15, 0x24($v1)
    ctx->pc = 0x2a99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a99a8: 0xc462002c  lwc1        $f2, 0x2C($v1)
    ctx->pc = 0x2a99a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a99ac: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x2a99acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2a99b0: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x2a99b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a99b4: 0x460f9bc2  mul.s       $f15, $f19, $f15
    ctx->pc = 0x2a99b4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[19], ctx->f[15]);
    // 0x2a99b8: 0x46028402  mul.s       $f16, $f16, $f2
    ctx->pc = 0x2a99b8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x2a99bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a99bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a99c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a99c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a99c4: 0x46039cc2  mul.s       $f19, $f19, $f3
    ctx->pc = 0x2a99c4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[3]);
    // 0x2a99c8: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x2a99c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a99cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a99ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a99d0: 0xc46e0010  lwc1        $f14, 0x10($v1)
    ctx->pc = 0x2a99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a99d4: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2a99d4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2a99d8: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x2a99d8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x2a99dc: 0x46009cc2  mul.s       $f19, $f19, $f0
    ctx->pc = 0x2a99dcu;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[0]);
    // 0x2a99e0: 0xc0aa6aa  jal         func_2A9AA8
    ctx->pc = 0x2A99E0u;
    SET_GPR_U32(ctx, 31, 0x2A99E8u);
    ctx->pc = 0x2A99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A99E0u;
    // 0x2a99e4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9AA8u, 0x2A99E0u, 0x2A99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99E8u;
label_2a99e8:
    // 0x2a99e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a99e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a99ec:
    // 0x2a99ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A99ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99ECu;
        // 0x2a99f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A99ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A99F4u;
    // 0x2a99f4: 0x0  nop
    ctx->pc = 0x2a99f4u;
    // NOP
    ctx->pc = 0x2a99f8u;
}
