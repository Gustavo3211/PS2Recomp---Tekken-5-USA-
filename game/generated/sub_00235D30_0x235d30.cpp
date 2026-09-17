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

// Function: sub_00235D30
// Address: 0x235d30 - 0x235ec0
void sub_00235D30_0x235d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235D30_0x235d30");
#endif

    switch (ctx->pc) {
        case 0x235d64u: goto label_235d64;
        case 0x235dc0u: goto label_235dc0;
        case 0x235e28u: goto label_235e28;
        case 0x235e64u: goto label_235e64;
        case 0x235e9cu: goto label_235e9c;
        default: break;
    }

    ctx->pc = 0x235d30u;

    // 0x235d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235d40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235d48: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235d50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x235d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235d58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x235d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x235d5c: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x235D5Cu;
    SET_GPR_U32(ctx, 31, 0x235D64u);
    ctx->pc = 0x235D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D5Cu;
    // 0x235d60: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x235D5Cu, 0x235D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D64u;
label_235d64:
    // 0x235d64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x235d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x235d68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x235d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x235d6c: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x235d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x235d70: 0x2e440064  sltiu       $a0, $s2, 0x64
    ctx->pc = 0x235d70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x235d74: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x235d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x235d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x235d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x235d7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235D7Cu;
    {
        const bool branch_taken_0x235d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D7Cu;
        // 0x235d80: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d7c) {
            ctx->pc = 0x235D98u;
            goto label_235d98;
        }
    }
    ctx->pc = 0x235D84u;
    // 0x235d84: 0x32824000  andi        $v0, $s4, 0x4000
    ctx->pc = 0x235d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16384);
    // 0x235d88: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x235D88u;
    {
        const bool branch_taken_0x235d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d88) {
            ctx->pc = 0x235D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D88u;
            // 0x235d8c: 0x8e22087c  lw          $v0, 0x87C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D94u;
            goto label_235d94;
        }
    }
    ctx->pc = 0x235D90u;
    // 0x235d90: 0x8e220880  lw          $v0, 0x880($s1)
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2176)));
label_235d94:
    // 0x235d94: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x235d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_235d98:
    // 0x235d98: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x235d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x235d9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x235d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235da0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x235da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x235da4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x235da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x235da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235DA8u;
    {
        const bool branch_taken_0x235da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235da8) {
            ctx->pc = 0x235DB8u;
            goto label_235db8;
        }
    }
    ctx->pc = 0x235DB0u;
    // 0x235db0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x235db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x235db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235db8:
    // 0x235db8: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x235DB8u;
    SET_GPR_U32(ctx, 31, 0x235DC0u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x235DB8u, 0x235DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x235dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x235dc4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x235dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x235dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235dcc: 0x12430010  beq         $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x235DCCu;
    {
        const bool branch_taken_0x235dcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x235DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DCCu;
        // 0x235dd0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dcc) {
            ctx->pc = 0x235E10u;
            goto label_235e10;
        }
    }
    ctx->pc = 0x235DD4u;
    // 0x235dd4: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x235DD4u;
    {
        const bool branch_taken_0x235dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x235dd4) {
            ctx->pc = 0x235DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DD4u;
            // 0x235dd8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DF0u;
            goto label_235df0;
        }
    }
    ctx->pc = 0x235DDCu;
    // 0x235ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235de0: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x235DE0u;
    {
        const bool branch_taken_0x235de0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x235de0) {
            ctx->pc = 0x235DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DE0u;
            // 0x235de4: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E50u;
            goto label_235e50;
        }
    }
    ctx->pc = 0x235DE8u;
    // 0x235de8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x235DE8u;
    {
        const bool branch_taken_0x235de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235de8) {
            ctx->pc = 0x235E94u;
            goto label_235e94;
        }
    }
    ctx->pc = 0x235DF0u;
label_235df0:
    // 0x235df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235df8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x235df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x235dfc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x235dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x235e00: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x235e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x235e04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x235E04u;
    {
        const bool branch_taken_0x235e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E04u;
        // 0x235e08: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e04) {
            ctx->pc = 0x235E94u;
            goto label_235e94;
        }
    }
    ctx->pc = 0x235E0Cu;
    // 0x235e0c: 0x0  nop
    ctx->pc = 0x235e0cu;
    // NOP
label_235e10:
    // 0x235e10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x235e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235e14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x235e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x235e18: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x235e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x235e1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e20: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235E20u;
    SET_GPR_U32(ctx, 31, 0x235E28u);
    ctx->pc = 0x235E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E20u;
    // 0x235e24: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235E20u, 0x235E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E28u;
label_235e28:
    // 0x235e28: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x235e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235e30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235e34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x235e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x235e38: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x235e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x235e3c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x235e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235e40: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x235e40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x235e44: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x235e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x235e48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x235E48u;
    {
        const bool branch_taken_0x235e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E48u;
        // 0x235e4c: 0x8622000e  lh          $v0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e48) {
            ctx->pc = 0x235E88u;
            goto label_235e88;
        }
    }
    ctx->pc = 0x235E50u;
label_235e50:
    // 0x235e50: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x235e54: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x235e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x235e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e5c: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235E5Cu;
    SET_GPR_U32(ctx, 31, 0x235E64u);
    ctx->pc = 0x235E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E5Cu;
    // 0x235e60: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235E5Cu, 0x235E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E64u;
label_235e64:
    // 0x235e64: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x235e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235e6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235e70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x235e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x235e74: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x235e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x235e78: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x235e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235e7c: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x235e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x235e80: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x235e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x235e84: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_235e88:
    // 0x235e88: 0x21023  negu        $v0, $v0
    ctx->pc = 0x235e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x235e8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x235e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x235e90: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x235e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_235e94:
    // 0x235e94: 0xc08c686  jal         func_231A18
    ctx->pc = 0x235E94u;
    SET_GPR_U32(ctx, 31, 0x235E9Cu);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x235E94u, 0x235E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E9Cu;
label_235e9c:
    // 0x235e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235ea8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235eac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235eacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235eb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x235eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x235EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB4u;
        // 0x235eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235EBCu;
    // 0x235ebc: 0x0  nop
    ctx->pc = 0x235ebcu;
    // NOP
    ctx->pc = 0x235ec0u;
}
