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

// Function: sub_00258D20
// Address: 0x258d20 - 0x258fa0
void sub_00258D20_0x258d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258D20_0x258d20");
#endif

    switch (ctx->pc) {
        case 0x258dc8u: goto label_258dc8;
        case 0x258de8u: goto label_258de8;
        case 0x258df8u: goto label_258df8;
        case 0x258e30u: goto label_258e30;
        case 0x258e78u: goto label_258e78;
        case 0x258eb0u: goto label_258eb0;
        case 0x258f48u: goto label_258f48;
        default: break;
    }

    ctx->pc = 0x258d20u;

    // 0x258d20: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x258d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x258d24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x258d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x258d28: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x258d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x258d2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x258d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d30: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x258d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x258d34: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x258d34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d38: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x258d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x258d3c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x258d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d40: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x258d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x258d44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258d48: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x258d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x258d4c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x258d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x258d50: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x258d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x258d54: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x258d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x258d58: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x258d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x258d5c: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x258D5Cu;
    {
        const bool branch_taken_0x258d5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x258D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D5Cu;
        // 0x258d60: 0xe7b40148  swc1        $f20, 0x148($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d5c) {
            ctx->pc = 0x258DA0u;
            goto label_258da0;
        }
    }
    ctx->pc = 0x258D64u;
    // 0x258d64: 0x28e2001f  slti        $v0, $a3, 0x1F
    ctx->pc = 0x258d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x258d68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258D68u;
    {
        const bool branch_taken_0x258d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D68u;
        // 0x258d6c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d68) {
            ctx->pc = 0x258D90u;
            goto label_258d90;
        }
    }
    ctx->pc = 0x258D70u;
    // 0x258d70: 0x28e20012  slti        $v0, $a3, 0x12
    ctx->pc = 0x258d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x258d74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258D74u;
    {
        const bool branch_taken_0x258d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D74u;
        // 0x258d78: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d74) {
            ctx->pc = 0x258DACu;
            goto label_258dac;
        }
    }
    ctx->pc = 0x258D7Cu;
    // 0x258d7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258D7Cu;
    {
        const bool branch_taken_0x258d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d7c) {
            ctx->pc = 0x258DACu;
            goto label_258dac;
        }
    }
    ctx->pc = 0x258D84u;
    // 0x258d84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x258D84u;
    {
        const bool branch_taken_0x258d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D84u;
        // 0x258d88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d84) {
            ctx->pc = 0x258DACu;
            goto label_258dac;
        }
    }
    ctx->pc = 0x258D8Cu;
    // 0x258d8c: 0x0  nop
    ctx->pc = 0x258d8cu;
    // NOP
label_258d90:
    // 0x258d90: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258D90u;
    {
        const bool branch_taken_0x258d90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x258D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D90u;
        // 0x258d94: 0x2d020002  sltiu       $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d90) {
            ctx->pc = 0x258DA8u;
            goto label_258da8;
        }
    }
    ctx->pc = 0x258D98u;
    // 0x258d98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258D98u;
    {
        const bool branch_taken_0x258d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d98) {
            ctx->pc = 0x258DACu;
            goto label_258dac;
        }
    }
    ctx->pc = 0x258DA0u;
label_258da0:
    // 0x258da0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258DA0u;
    {
        const bool branch_taken_0x258da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA0u;
        // 0x258da4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da0) {
            ctx->pc = 0x258DACu;
            goto label_258dac;
        }
    }
    ctx->pc = 0x258DA8u;
label_258da8:
    // 0x258da8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x258da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_258dac:
    // 0x258dac: 0x460006f  bltz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x258DACu;
    {
        const bool branch_taken_0x258dac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x258DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DACu;
        // 0x258db0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dac) {
            ctx->pc = 0x258F6Cu;
            goto label_258f6c;
        }
    }
    ctx->pc = 0x258DB4u;
    // 0x258db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x258db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258db8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x258db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x258dbc: 0x3a8c0  sll         $s5, $v1, 3
    ctx->pc = 0x258dbcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x258dc0: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x258DC0u;
    SET_GPR_U32(ctx, 31, 0x258DC8u);
    ctx->pc = 0x258DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DC0u;
    // 0x258dc4: 0x8c500020  lw          $s0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x258DC0u, 0x258DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DC8u;
label_258dc8:
    // 0x258dc8: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x258dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x258dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x258dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dd0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x258dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x258dd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x258dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258ddc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x258de0: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x258DE0u;
    SET_GPR_U32(ctx, 31, 0x258DE8u);
    ctx->pc = 0x258DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DE0u;
    // 0x258de4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x258DE0u, 0x258DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DE8u;
label_258de8:
    // 0x258de8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x258de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x258dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x258decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258df0: 0x24562100  addiu       $s6, $v0, 0x2100
    ctx->pc = 0x258df0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x258df4: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x258df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_258df8:
    // 0x258df8: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x258df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x258dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258e00: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x258e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x258e04: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x258e08: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x258e08u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x258e0c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x258e0cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258e10: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x258e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x258e14: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x258e14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x258e18: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x258e18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x258e1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x258e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e20: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x258e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x258e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e28: 0xc08491e  jal         func_212478
    ctx->pc = 0x258E28u;
    SET_GPR_U32(ctx, 31, 0x258E30u);
    ctx->pc = 0x258E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E28u;
    // 0x258e2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x258E28u, 0x258E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E30u;
label_258e30:
    // 0x258e30: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x258e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x258e34: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x258e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258e38: 0x0  nop
    ctx->pc = 0x258e38u;
    // NOP
    // 0x258e3c: 0x0  nop
    ctx->pc = 0x258e3cu;
    // NOP
    // 0x258e40: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x258e40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x258e44: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x258e44u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258e48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x258e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x258e4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x258e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x258e50: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x258e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x258e54: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x258e54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x258e58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258e5c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x258e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x258e60: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x258E60u;
    {
        const bool branch_taken_0x258e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E60u;
        // 0x258e64: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e60) {
            ctx->pc = 0x258DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258df8;
        }
    }
    ctx->pc = 0x258E68u;
    // 0x258e68: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x258e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x258e6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x258e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e70: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x258e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e74: 0x0  nop
    ctx->pc = 0x258e74u;
    // NOP
label_258e78:
    // 0x258e78: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x258e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x258e7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258e80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x258e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e84: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x258e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x258e88: 0x2a440004  slti        $a0, $s2, 0x4
    ctx->pc = 0x258e88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x258e8c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x258E8Cu;
    {
        const bool branch_taken_0x258e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x258E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E8Cu;
        // 0x258e90: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e8c) {
            ctx->pc = 0x258E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258e78;
        }
    }
    ctx->pc = 0x258E94u;
    // 0x258e94: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x258e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258e98: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x258e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e9c: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x258ea0: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x258ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x258ea4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x258ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x258ea8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x258ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x258eac: 0x0  nop
    ctx->pc = 0x258eacu;
    // NOP
label_258eb0:
    // 0x258eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258eb4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x258eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x258eb8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x258eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258ebc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x258ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ec0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x258ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x258ec4: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x258ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x258ec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258ecc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x258ECCu;
    {
        const bool branch_taken_0x258ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ECCu;
        // 0x258ed0: 0x2a450008  slti        $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ecc) {
            ctx->pc = 0x258EDCu;
            goto label_258edc;
        }
    }
    ctx->pc = 0x258ED4u;
    // 0x258ed4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x258ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258ed8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x258ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_258edc:
    // 0x258edc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x258edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258ee0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x258ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258ee8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x258EE8u;
    {
        const bool branch_taken_0x258ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x258EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EE8u;
        // 0x258eec: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ee8) {
            ctx->pc = 0x258EFCu;
            goto label_258efc;
        }
    }
    ctx->pc = 0x258EF0u;
    // 0x258ef0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x258ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258ef4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x258ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x258ef8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x258ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258efc:
    // 0x258efc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x258efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x258f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258f04: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x258F04u;
    {
        const bool branch_taken_0x258f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258f04) {
            ctx->pc = 0x258F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258F04u;
            // 0x258f08: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258F18u;
            goto label_258f18;
        }
    }
    ctx->pc = 0x258F0Cu;
    // 0x258f0c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x258f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258f10: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x258f10u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x258f14: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x258f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258f18:
    // 0x258f18: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x258f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258f1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x258f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258f20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x258F20u;
    {
        const bool branch_taken_0x258f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258f20) {
            ctx->pc = 0x258F30u;
            goto label_258f30;
        }
    }
    ctx->pc = 0x258F28u;
    // 0x258f28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x258f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258f2c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x258f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_258f30:
    // 0x258f30: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x258F30u;
    {
        const bool branch_taken_0x258f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F30u;
        // 0x258f34: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f30) {
            ctx->pc = 0x258EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258eb0;
        }
    }
    ctx->pc = 0x258F38u;
    // 0x258f38: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x258f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x258f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f40: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x258f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x258f44: 0x0  nop
    ctx->pc = 0x258f44u;
    // NOP
label_258f48:
    // 0x258f48: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x258f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258f4c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x258f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x258f50: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x258f50u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258f54: 0x4bf8817d  vftoi4.xyzw $vf24, $vf16
    ctx->pc = 0x258f54u;
    { __m128 src = ctx->vu0_vf[16]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x258f58: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x258f58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x258f5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258f60: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x258f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x258f64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258F64u;
    {
        const bool branch_taken_0x258f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F64u;
        // 0x258f68: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f64) {
            ctx->pc = 0x258F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258f48;
        }
    }
    ctx->pc = 0x258F6Cu;
label_258f6c:
    // 0x258f6c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x258f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x258f70: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x258f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x258f74: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x258f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x258f78: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x258f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x258f7c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x258f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x258f80: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x258f84: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x258f84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x258f88: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x258f88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x258f8c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x258f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x258f90: 0xc7b40148  lwc1        $f20, 0x148($sp)
    ctx->pc = 0x258f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258f94: 0x3e00008  jr          $ra
    ctx->pc = 0x258F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F94u;
        // 0x258f98: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258F9Cu;
    // 0x258f9c: 0x0  nop
    ctx->pc = 0x258f9cu;
    // NOP
    ctx->pc = 0x258fa0u;
}
