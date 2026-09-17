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

// Function: sub_002B2CB8
// Address: 0x2b2cb8 - 0x2b2dd8
void sub_002B2CB8_0x2b2cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2CB8_0x2b2cb8");
#endif

    switch (ctx->pc) {
        case 0x2b2d68u: goto label_2b2d68;
        case 0x2b2d74u: goto label_2b2d74;
        case 0x2b2dacu: goto label_2b2dac;
        default: break;
    }

    ctx->pc = 0x2b2cb8u;

    // 0x2b2cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2cc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2cc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2cc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2cd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2cd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2cd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2cdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b2ce0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2ce4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2ce8: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b2cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2cf0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2b2cf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2cf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2cfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b2cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b2d00: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2d04: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b2d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b2d08: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2b2d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b2d0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2D0Cu;
    {
        const bool branch_taken_0x2b2d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D0Cu;
        // 0x2b2d10: 0x86450002  lh          $a1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d0c) {
            ctx->pc = 0x2B2D18u;
            goto label_2b2d18;
        }
    }
    ctx->pc = 0x2B2D14u;
    // 0x2b2d14: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x2b2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_2b2d18:
    // 0x2b2d18: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2b2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2d1c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b2d20: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2d20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2d24: 0x2694ce50  addiu       $s4, $s4, -0x31B0
    ctx->pc = 0x2b2d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954576));
    // 0x2b2d28: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b2d2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2d30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2D34u;
    {
        const bool branch_taken_0x2b2d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D34u;
        // 0x2b2d38: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d34) {
            ctx->pc = 0x2B2D58u;
            goto label_2b2d58;
        }
    }
    ctx->pc = 0x2B2D3Cu;
    // 0x2b2d3c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b2d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2b2d40: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2d44: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2d48: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2d4c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2d50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2D50u;
    {
        const bool branch_taken_0x2b2d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D50u;
        // 0x2b2d54: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d50) {
            ctx->pc = 0x2B2DB0u;
            goto label_2b2db0;
        }
    }
    ctx->pc = 0x2B2D58u;
label_2b2d58:
    // 0x2b2d58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2d5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2d60: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2D60u;
    SET_GPR_U32(ctx, 31, 0x2B2D68u);
    ctx->pc = 0x2B2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D60u;
    // 0x2b2d64: 0x2453003c  addiu       $s3, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2D60u, 0x2B2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D68u;
label_2b2d68:
    // 0x2b2d68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2d6c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B2D74u);
    ctx->pc = 0x2B2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D6Cu;
    // 0x2b2d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2D6Cu, 0x2B2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D74u;
label_2b2d74:
    // 0x2b2d74: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2d78: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b2d7c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b2d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2d80: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2d84: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2d88: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b2d8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2d90: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b2d94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2d98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2D98u;
    {
        const bool branch_taken_0x2b2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D98u;
        // 0x2b2d9c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d98) {
            ctx->pc = 0x2B2DB0u;
            goto label_2b2db0;
        }
    }
    ctx->pc = 0x2B2DA0u;
    // 0x2b2da0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2da4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2DA4u;
    SET_GPR_U32(ctx, 31, 0x2B2DACu);
    ctx->pc = 0x2B2DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DA4u;
    // 0x2b2da8: 0x24840198  addiu       $a0, $a0, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2DA4u, 0x2B2DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DACu;
label_2b2dac:
    // 0x2b2dac: 0x0  nop
    ctx->pc = 0x2b2dacu;
    // NOP
label_2b2db0:
    // 0x2b2db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b2dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2dc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2dc8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DCCu;
        // 0x2b2dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2DD4u;
    // 0x2b2dd4: 0x0  nop
    ctx->pc = 0x2b2dd4u;
    // NOP
    ctx->pc = 0x2b2dd8u;
}
