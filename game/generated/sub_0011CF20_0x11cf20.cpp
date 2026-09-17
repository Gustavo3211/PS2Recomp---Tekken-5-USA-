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

// Function: sub_0011CF20
// Address: 0x11cf20 - 0x11d1b0
void sub_0011CF20_0x11cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CF20_0x11cf20");
#endif

    switch (ctx->pc) {
        case 0x11cfe0u: goto label_11cfe0;
        default: break;
    }

    ctx->pc = 0x11cf20u;

    // 0x11cf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11cf24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11cf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11cf28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cf2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11cf30: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x11cf30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11cf34: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11cf38: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x11cf3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11cf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11cf40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11cf44: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x11cf44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x11cf48: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11cf48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11CF4Cu;
    {
        const bool branch_taken_0x11cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF4Cu;
        // 0x11cf50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf4c) {
            ctx->pc = 0x11CF88u;
            goto label_11cf88;
        }
    }
    ctx->pc = 0x11CF54u;
    // 0x11cf54: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF54u;
        // 0x11cf58: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11CF70u;
            goto label_11cf70;
        }
    }
    ctx->pc = 0x11CF5Cu;
    // 0x11cf5c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x11cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x11cf60: 0xc441e7bc  lwc1        $f1, -0x1844($v0)
    ctx->pc = 0x11cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cf64: 0xc460e7cc  lwc1        $f0, -0x1834($v1)
    ctx->pc = 0x11cf64u;
    { uint32_t bits = FAST_READ32(0x14E7CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cf68: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11CF68u;
    {
        const bool branch_taken_0x11cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF68u;
        // 0x11cf6c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf68) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11CF70u;
label_11cf70:
    // 0x11cf70: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x11cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x11cf74: 0xc440e7bc  lwc1        $f0, -0x1844($v0)
    ctx->pc = 0x11cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cf78: 0xc461e7cc  lwc1        $f1, -0x1834($v1)
    ctx->pc = 0x11cf78u;
    { uint32_t bits = FAST_READ32(0x14E7CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cf7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11cf7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11cf80: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x11CF80u;
    {
        const bool branch_taken_0x11cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF80u;
        // 0x11cf84: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf80) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11CF88u;
label_11cf88:
    // 0x11cf88: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x11cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x11cf8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11cf90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11cf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf94: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11CF94u;
    {
        const bool branch_taken_0x11cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF94u;
        // 0x11cf98: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf94) {
            ctx->pc = 0x11CFD8u;
            goto label_11cfd8;
        }
    }
    ctx->pc = 0x11CF9Cu;
    // 0x11cf9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11cfa0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11cfa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cfa4: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11CFA4u;
    {
        const bool branch_taken_0x11cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFA4u;
        // 0x11cfa8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfa4) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11CFACu;
    // 0x11cfac: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11cfb0: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11cfb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11cfb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11cfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cfb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cfbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cfc0: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x11cfc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x11cfc4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x11cfc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cfc8: 0x45010073  bc1t        . + 4 + (0x73 << 2)
    ctx->pc = 0x11CFC8u;
    {
        const bool branch_taken_0x11cfc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFC8u;
        // 0x11cfcc: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc8) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11CFD0u;
    // 0x11cfd0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x11CFD0u;
    {
        const bool branch_taken_0x11cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFD0u;
        // 0x11cfd4: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfd0) {
            ctx->pc = 0x11D0C0u;
            goto label_11d0c0;
        }
    }
    ctx->pc = 0x11CFD8u;
label_11cfd8:
    // 0x11cfd8: 0xc0474a2  jal         func_11D288
    ctx->pc = 0x11CFD8u;
    SET_GPR_U32(ctx, 31, 0x11CFE0u);
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11CFD8u, 0x11CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFE0u;
label_11cfe0:
    // 0x11cfe0: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x11cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x11cfe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11cfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11cfe8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11cfe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cfec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11CFECu;
    {
        const bool branch_taken_0x11cfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFECu;
        // 0x11cff0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfec) {
            ctx->pc = 0x11D060u;
            goto label_11d060;
        }
    }
    ctx->pc = 0x11CFF4u;
    // 0x11cff4: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x11cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x11cff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11cffc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11cffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d000: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D000u;
    {
        const bool branch_taken_0x11d000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d000) {
            ctx->pc = 0x11D038u;
            goto label_11d038;
        }
    }
    ctx->pc = 0x11D008u;
    // 0x11d008: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x11d008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x11d00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d010: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d014: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11d014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11d018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d01c: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x11d01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x11d020: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11d024: 0x0  nop
    ctx->pc = 0x11d024u;
    // NOP
    // 0x11d028: 0x0  nop
    ctx->pc = 0x11d028u;
    // NOP
    // 0x11d02c: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x11d02cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x11d030: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11D030u;
    {
        const bool branch_taken_0x11d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D030u;
        // 0x11d034: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d030) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D038u;
label_11d038:
    // 0x11d038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d03c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d040: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x11d040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11d044: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x11d044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x11d048: 0x0  nop
    ctx->pc = 0x11d048u;
    // NOP
    // 0x11d04c: 0x0  nop
    ctx->pc = 0x11d04cu;
    // NOP
    // 0x11d050: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x11d050u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x11d054: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11D054u;
    {
        const bool branch_taken_0x11d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D054u;
        // 0x11d058: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d054) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D05Cu;
    // 0x11d05c: 0x0  nop
    ctx->pc = 0x11d05cu;
    // NOP
label_11d060:
    // 0x11d060: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x11d064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d068: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11d068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d06c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11D06Cu;
    {
        const bool branch_taken_0x11d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d06c) {
            ctx->pc = 0x11D070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D06Cu;
            // 0x11d070: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0A8u;
            goto label_11d0a8;
        }
    }
    ctx->pc = 0x11D074u;
    // 0x11d074: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x11d074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x11d078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d080: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d084: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x11d084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x11d088: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x11d088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x11d08c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11d08cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11d090: 0x0  nop
    ctx->pc = 0x11d090u;
    // NOP
    // 0x11d094: 0x0  nop
    ctx->pc = 0x11d094u;
    // NOP
    // 0x11d098: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x11d098u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x11d09c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D09Cu;
    {
        const bool branch_taken_0x11d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D09Cu;
        // 0x11d0a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d09c) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D0A4u;
    // 0x11d0a4: 0x0  nop
    ctx->pc = 0x11d0a4u;
    // NOP
label_11d0a8:
    // 0x11d0a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11d0ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d0b0: 0x0  nop
    ctx->pc = 0x11d0b0u;
    // NOP
    // 0x11d0b4: 0x0  nop
    ctx->pc = 0x11d0b4u;
    // NOP
    // 0x11d0b8: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x11d0b8u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
label_11d0bc:
    // 0x11d0bc: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x11d0bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_11d0c0:
    // 0x11d0c0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x11d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x11d0c4: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x11d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x11d0c8: 0xc4470028  lwc1        $f7, 0x28($v0)
    ctx->pc = 0x11d0c8u;
    { uint32_t bits = FAST_READ32(0x14E7F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11d0cc: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x11d0ccu;
    { uint32_t bits = FAST_READ32(0x14E7F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d0d0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x11d0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11d0d4: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x11d0d4u;
    { uint32_t bits = FAST_READ32(0x14E7F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d0d8: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x11d0d8u;
    { uint32_t bits = FAST_READ32(0x14E7E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11d0dc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11d0dcu;
    { uint32_t bits = FAST_READ32(0x14E7ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d0e0: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x11d0e0u;
    { uint32_t bits = FAST_READ32(0x14E7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11d0e4: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x11d0e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11d0e8: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x11d0e8u;
    { uint32_t bits = FAST_READ32(0x14E7E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d0ec: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x11d0ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11d0f0: 0xc4490008  lwc1        $f9, 0x8($v0)
    ctx->pc = 0x11d0f0u;
    { uint32_t bits = FAST_READ32(0x14E7D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11d0f4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x11d0f4u;
    { uint32_t bits = FAST_READ32(0x14E7DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d0f8: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x11d0f8u;
    { uint32_t bits = FAST_READ32(0x14E7D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x11d0fc: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x11d0fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x11d100: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x11d100u;
    { uint32_t bits = FAST_READ32(0x14E7D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x11d104: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11d104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11d108: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x11d108u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11d10c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11d10cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d110: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x11d110u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x11d114: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11d114u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11d118: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x11d118u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11d11c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11d11cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11d120: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x11d120u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x11d124: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x11d124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11d128: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x11d128u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x11d12c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x11d12cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11d130: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x11d130u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x11d134: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x11d134u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x11d138: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x11d138u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x11d13c: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x11d13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x11d140: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x11d140u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x11d144: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D144u;
    {
        const bool branch_taken_0x11d144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D144u;
        // 0x11d148: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d144) {
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D14Cu;
    // 0x11d14c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d150: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x11d150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x11d154: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11D154u;
    {
        const bool branch_taken_0x11d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D154u;
        // 0x11d158: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d154) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11D15Cu;
    // 0x11d15c: 0x0  nop
    ctx->pc = 0x11d15cu;
    // NOP
label_11d160:
    // 0x11d160: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d164: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11d168: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11d168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11d16c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11d170: 0xc421e7c0  lwc1        $f1, -0x1840($at)
    ctx->pc = 0x11d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d174: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x11d174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x11d178: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11d178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11d17c: 0xc422e7b0  lwc1        $f2, -0x1850($at)
    ctx->pc = 0x11d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d180: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x11d180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x11d184: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11d184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11d188: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x11d188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x11d18c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D18Cu;
    {
        const bool branch_taken_0x11d18c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D18Cu;
        // 0x11d190: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d18c) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11D194u;
    // 0x11d194: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d194u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11d198:
    // 0x11d198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1A4u;
        // 0x11d1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D1ACu;
    // 0x11d1ac: 0x0  nop
    ctx->pc = 0x11d1acu;
    // NOP
    ctx->pc = 0x11d1b0u;
}
