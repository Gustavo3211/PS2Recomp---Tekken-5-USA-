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

// Function: sub_0011FAC0
// Address: 0x11fac0 - 0x11fd48
void sub_0011FAC0_0x11fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FAC0_0x11fac0");
#endif

    switch (ctx->pc) {
        case 0x11fb14u: goto label_11fb14;
        default: break;
    }

    ctx->pc = 0x11fac0u;

    // 0x11fac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fac4: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x11fac4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x11fac8: 0x44068000  mfc1        $a2, $f16
    ctx->pc = 0x11fac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[16], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11facc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11faccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11fad0: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x11fad4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11fad8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fadc: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x11fadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11fae0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11fae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11fae4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11FAE4u;
    {
        const bool branch_taken_0x11fae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE4u;
        // 0x11fae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fae4) {
            ctx->pc = 0x11FB60u;
            goto label_11fb60;
        }
    }
    ctx->pc = 0x11FAECu;
    // 0x11faec: 0x46008024  .word       0x46008024                   # cvt.w.s     $f0, $f16 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11faecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[16]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11faf0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11faf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11faf4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11FAF4u;
    {
        const bool branch_taken_0x11faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faf4) {
            ctx->pc = 0x11FB64u;
            goto label_11fb64;
        }
    }
    ctx->pc = 0x11FAFCu;
    // 0x11fafc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x11fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fb00: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11fb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11fb04: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11FB04u;
    {
        const bool branch_taken_0x11fb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fb04) {
            ctx->pc = 0x11FB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB04u;
            // 0x11fb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FB30u;
            goto label_11fb30;
        }
    }
    ctx->pc = 0x11FB0Cu;
    // 0x11fb0c: 0xc0474a2  jal         func_11D288
    ctx->pc = 0x11FB0Cu;
    SET_GPR_U32(ctx, 31, 0x11FB14u);
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11FB0Cu, 0x11FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB14u;
label_11fb14:
    // 0x11fb14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fb18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fb1c: 0x0  nop
    ctx->pc = 0x11fb1cu;
    // NOP
    // 0x11fb20: 0x0  nop
    ctx->pc = 0x11fb20u;
    // NOP
    // 0x11fb24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11fb24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11fb28: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11FB28u;
    {
        const bool branch_taken_0x11fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB28u;
        // 0x11fb2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb28) {
            ctx->pc = 0x11FD3Cu;
            goto label_11fd3c;
        }
    }
    ctx->pc = 0x11FB30u;
label_11fb30:
    // 0x11fb30: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FB30u;
    {
        const bool branch_taken_0x11fb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB30u;
        // 0x11fb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb30) {
            ctx->pc = 0x11FB58u;
            goto label_11fb58;
        }
    }
    ctx->pc = 0x11FB38u;
    // 0x11fb38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11fb3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fb40: 0x0  nop
    ctx->pc = 0x11fb40u;
    // NOP
    // 0x11fb44: 0x0  nop
    ctx->pc = 0x11fb44u;
    // NOP
    // 0x11fb48: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x11fb48u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[16];
    // 0x11fb4c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x11FB4Cu;
    {
        const bool branch_taken_0x11fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb4c) {
            ctx->pc = 0x11FD3Cu;
            goto label_11fd3c;
        }
    }
    ctx->pc = 0x11FB54u;
    // 0x11fb54: 0x0  nop
    ctx->pc = 0x11fb54u;
    // NOP
label_11fb58:
    // 0x11fb58: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x11FB58u;
    {
        const bool branch_taken_0x11fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB58u;
        // 0x11fb5c: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb58) {
            ctx->pc = 0x11FD38u;
            goto label_11fd38;
        }
    }
    ctx->pc = 0x11FB60u;
label_11fb60:
    // 0x11fb60: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x11fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_11fb64:
    // 0x11fb64: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x11fb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x11fb68: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11fb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11fb6c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11FB6Cu;
    {
        const bool branch_taken_0x11fb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb6c) {
            ctx->pc = 0x11FB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB6Cu;
            // 0x11fb70: 0x461083c2  mul.s       $f15, $f16, $f16 (Delay Slot)
            ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBB0u;
            goto label_11fbb0;
        }
    }
    ctx->pc = 0x11FB74u;
    // 0x11fb74: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FB84u;
            goto label_11fb84;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x11fb7cu;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
    // 0x11fb80: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x11fb80u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_11fb84:
    // 0x11fb84: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11fb88: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11fb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11fb8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fb90: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x11fb94: 0x34212167  ori         $at, $at, 0x2167
    ctx->pc = 0x11fb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8551);
    // 0x11fb98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fb9c: 0x461003c1  sub.s       $f15, $f0, $f16
    ctx->pc = 0x11fb9cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x11fba0: 0x460d0b81  sub.s       $f14, $f1, $f13
    ctx->pc = 0x11fba0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x11fba4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11fba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11fba8: 0x460e7c00  add.s       $f16, $f15, $f14
    ctx->pc = 0x11fba8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x11fbac: 0x461083c2  mul.s       $f15, $f16, $f16
    ctx->pc = 0x11fbacu;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
label_11fbb0:
    // 0x11fbb0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x11fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x11fbb4: 0x2442edc0  addiu       $v0, $v0, -0x1240
    ctx->pc = 0x11fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
    // 0x11fbb8: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x11fbbc: 0xc4480030  lwc1        $f8, 0x30($v0)
    ctx->pc = 0x11fbbcu;
    { uint32_t bits = FAST_READ32(0x14EDF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11fbc0: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x11fbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x11fbc4: 0xc449002c  lwc1        $f9, 0x2C($v0)
    ctx->pc = 0x11fbc4u;
    { uint32_t bits = FAST_READ32(0x14EDECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11fbc8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x11fbc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11fbcc: 0x460f7b82  mul.s       $f14, $f15, $f15
    ctx->pc = 0x11fbccu;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x11fbd0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x11fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fbd4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x11fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fbd8: 0x46107b02  mul.s       $f12, $f15, $f16
    ctx->pc = 0x11fbd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x11fbdc: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x11fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11fbe0: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x11fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11fbe4: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x11fbe4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x11fbe8: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x11fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11fbec: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x11fbecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x11fbf0: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x11fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11fbf4: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x11fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11fbf8: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x11fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11fbfc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11fbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11fc00: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x11fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11fc04: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x11fc04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x11fc08: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x11fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x11fc0c: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x11fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x11fc10: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x11fc10u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x11fc14: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11fc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11fc18: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x11fc18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x11fc1c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11fc1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11fc20: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x11fc20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x11fc24: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x11fc24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x11fc28: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x11fc28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x11fc2c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x11fc2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x11fc30: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11fc30u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11fc34: 0x46057142  mul.s       $f5, $f14, $f5
    ctx->pc = 0x11fc34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x11fc38: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x11fc38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x11fc3c: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x11fc3cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x11fc40: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x11fc40u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x11fc44: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x11fc44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x11fc48: 0x460771c2  mul.s       $f7, $f14, $f7
    ctx->pc = 0x11fc48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x11fc4c: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x11fc4cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x11fc50: 0x460758c0  add.s       $f3, $f11, $f7
    ctx->pc = 0x11fc50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x11fc54: 0x460a7942  mul.s       $f5, $f15, $f10
    ctx->pc = 0x11fc54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
    // 0x11fc58: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x11fc58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x11fc5c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11fc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11fc60: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x11fc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x11fc64: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x11fc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x11fc68: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x11fc68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11fc6c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x11fc6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x11fc70: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11FC70u;
    {
        const bool branch_taken_0x11fc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC70u;
        // 0x11fc74: 0x46038380  add.s       $f14, $f16, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc70) {
            ctx->pc = 0x11FCC8u;
            goto label_11fcc8;
        }
    }
    ctx->pc = 0x11FC78u;
    // 0x11fc78: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x11fc78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11fc7c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x11fc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x11fc80: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x11fc80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x11fc84: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x11fc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x11fc88: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x11fc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11fc8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11fc94: 0x46057040  add.s       $f1, $f14, $f5
    ctx->pc = 0x11fc94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
    // 0x11fc98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11fc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11fc9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11fc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11fca0: 0x0  nop
    ctx->pc = 0x11fca0u;
    // NOP
    // 0x11fca4: 0x0  nop
    ctx->pc = 0x11fca4u;
    // NOP
    // 0x11fca8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11fca8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11fcac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11fcacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11fcb0: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x11fcb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x11fcb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11fcb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11fcb8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x11fcb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11fcbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11FCBCu;
    {
        const bool branch_taken_0x11fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCBCu;
        // 0x11fcc0: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcbc) {
            ctx->pc = 0x11FD38u;
            goto label_11fd38;
        }
    }
    ctx->pc = 0x11FCC4u;
    // 0x11fcc4: 0x0  nop
    ctx->pc = 0x11fcc4u;
    // NOP
label_11fcc8:
    // 0x11fcc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fccc: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11FCCCu;
    {
        const bool branch_taken_0x11fccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCCCu;
        // 0x11fcd0: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fccc) {
            ctx->pc = 0x11FD38u;
            goto label_11fd38;
        }
    }
    ctx->pc = 0x11FCD4u;
    // 0x11fcd4: 0x44037000  mfc1        $v1, $f14
    ctx->pc = 0x11fcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11fcd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11fcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcdc: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x11fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11fce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11fce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11fce4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x11fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x11fce8: 0x46107841  sub.s       $f1, $f15, $f16
    ctx->pc = 0x11fce8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x11fcec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11fcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11fcf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fcf4: 0x0  nop
    ctx->pc = 0x11fcf4u;
    // NOP
    // 0x11fcf8: 0x0  nop
    ctx->pc = 0x11fcf8u;
    // NOP
    // 0x11fcfc: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x11fcfcu;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x11fd00: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x11fd00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x11fd04: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11fd04u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x11fd08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11fd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11fd0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fd10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11fd14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x11fd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11fd18: 0x460f1902  mul.s       $f4, $f3, $f15
    ctx->pc = 0x11fd18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x11fd1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fd20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11fd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11fd24: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x11fd24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x11fd28: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x11fd28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x11fd2c: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x11fd2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11fd30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11fd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11fd34: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x11fd34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_11fd38:
    // 0x11fd38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11fd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11fd3c:
    // 0x11fd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD3Cu;
        // 0x11fd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD44u;
    // 0x11fd44: 0x0  nop
    ctx->pc = 0x11fd44u;
    // NOP
    ctx->pc = 0x11fd48u;
}
