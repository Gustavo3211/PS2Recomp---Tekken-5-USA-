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

// Function: sub_002C4D48
// Address: 0x2c4d48 - 0x2c51c8
void sub_002C4D48_0x2c4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4D48_0x2c4d48");
#endif

    switch (ctx->pc) {
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4e70u: goto label_2c4e70;
        case 0x2c4f3cu: goto label_2c4f3c;
        case 0x2c4fe8u: goto label_2c4fe8;
        case 0x2c5020u: goto label_2c5020;
        case 0x2c5144u: goto label_2c5144;
        case 0x2c515cu: goto label_2c515c;
        case 0x2c5170u: goto label_2c5170;
        case 0x2c5180u: goto label_2c5180;
        case 0x2c5190u: goto label_2c5190;
        default: break;
    }

    ctx->pc = 0x2c4d48u;

    // 0x2c4d48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c4d4c: 0x8f88cb08  lw          $t0, -0x34F8($gp)
    ctx->pc = 0x2c4d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
    // 0x2c4d50: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c4d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c4d54: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2c4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2c4d58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2c4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2c4d5c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2c4d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2c4d60: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c4d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c4d64: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2c4d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2c4d68: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2c4d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c4d6c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2c4d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2c4d70: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2c4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2c4d74: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2c4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2c4d78: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2c4d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c4d7c: 0x8cc20898  lw          $v0, 0x898($a2)
    ctx->pc = 0x2c4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    // 0x2c4d80: 0x9449006c  lhu         $t1, 0x6C($v0)
    ctx->pc = 0x2c4d80u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2c4d84: 0x2d220006  sltiu       $v0, $t1, 0x6
    ctx->pc = 0x2c4d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c4d88: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2C4D88u;
    {
        const bool branch_taken_0x2c4d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D88u;
        // 0x2c4d8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d88) {
            ctx->pc = 0x2C5190u;
            goto label_2c5190;
        }
    }
    ctx->pc = 0x2C4D90u;
    // 0x2c4d90: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2c4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c4d94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c4d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4d9c: 0x8c63e200  lw          $v1, -0x1E00($v1)
    ctx->pc = 0x2c4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959616)));
    // 0x2c4da0: 0x600008  jr          $v1
    ctx->pc = 0x2C4DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4DA8u: goto label_2c4da8;
            case 0x2C4DB0u: goto label_2c4db0;
            case 0x2C4DB8u: goto label_2c4db8;
            case 0x2C4DC0u: goto label_2c4dc0;
            case 0x2C4DD0u: goto label_2c4dd0;
            case 0x2C5190u: goto label_2c5190;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4DA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C4DA8u;
label_2c4da8:
    // 0x2c4da8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C4DA8u;
    {
        const bool branch_taken_0x2c4da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DA8u;
        // 0x2c4dac: 0x24150016  addiu       $s5, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4da8) {
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4DB0u;
label_2c4db0:
    // 0x2c4db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4DB0u;
    {
        const bool branch_taken_0x2c4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB0u;
        // 0x2c4db4: 0x24150011  addiu       $s5, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4db0) {
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4DB8u;
label_2c4db8:
    // 0x2c4db8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4DB8u;
    {
        const bool branch_taken_0x2c4db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB8u;
        // 0x2c4dbc: 0x24150012  addiu       $s5, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4db8) {
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4DC0u;
label_2c4dc0:
    // 0x2c4dc0: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c4dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4DC4u;
    {
        const bool branch_taken_0x2c4dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DC4u;
        // 0x2c4dc8: 0x240affbc  addiu       $t2, $zero, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dc4) {
            ctx->pc = 0x2C4DD8u;
            goto label_2c4dd8;
        }
    }
    ctx->pc = 0x2C4DCCu;
    // 0x2c4dcc: 0x0  nop
    ctx->pc = 0x2c4dccu;
    // NOP
label_2c4dd0:
    // 0x2c4dd0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2c4dd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c4dd4:
    // 0x2c4dd4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x2c4dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_2c4dd8:
    // 0x2c4dd8: 0x8f83bb04  lw          $v1, -0x44FC($gp)
    ctx->pc = 0x2c4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c4ddc: 0x186000c5  blez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C4DDCu;
    {
        const bool branch_taken_0x2c4ddc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DDCu;
        // 0x2c4de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ddc) {
            ctx->pc = 0x2C50F4u;
            goto label_2c50f4;
        }
    }
    ctx->pc = 0x2C4DE4u;
    // 0x2c4de4: 0x0  nop
    ctx->pc = 0x2c4de4u;
    // NOP
label_2c4de8:
    // 0x2c4de8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2c4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c4dec: 0x148200be  bne         $a0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2C4DECu;
    {
        const bool branch_taken_0x2c4dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DECu;
        // 0x2c4df0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dec) {
            ctx->pc = 0x2C50E8u;
            goto label_2c50e8;
        }
    }
    ctx->pc = 0x2C4DF4u;
    // 0x2c4df4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c4df8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2c4df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c4dfc: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x2c4dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c4e00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c4e04: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c4e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2c4e08: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4e0c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2c4e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c4e10: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x2c4e10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2c4e14: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2c4e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c4e18: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x2c4e18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2c4e1c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2c4e20: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2c4e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c4e24: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x2c4e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c4e28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c4e2c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C4E2Cu;
    {
        const bool branch_taken_0x2c4e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E2Cu;
        // 0x2c4e30: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e2c) {
            ctx->pc = 0x2C5010u;
            goto label_2c5010;
        }
    }
    ctx->pc = 0x2C4E34u;
    // 0x2c4e34: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x2c4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2c4e38: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c4e3c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2c4e3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2c4e40: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c4e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c4e44: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2C4E44u;
    {
        const bool branch_taken_0x2c4e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E44u;
        // 0x2c4e48: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e44) {
            ctx->pc = 0x2C5010u;
            goto label_2c5010;
        }
    }
    ctx->pc = 0x2C4E4Cu;
    // 0x2c4e4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c4e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e50: 0x12a000cf  beqz        $s5, . + 4 + (0xCF << 2)
    ctx->pc = 0x2C4E50u;
    {
        const bool branch_taken_0x2c4e50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E50u;
        // 0x2c4e54: 0xe21821  addu        $v1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e50) {
            ctx->pc = 0x2C5190u;
            goto label_2c5190;
        }
    }
    ctx->pc = 0x2C4E58u;
    // 0x2c4e58: 0xc7949320  lwc1        $f20, -0x6CE0($gp)
    ctx->pc = 0x2c4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4e5c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2c4e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4e60: 0x27be0014  addiu       $fp, $sp, 0x14
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2c4e64: 0x27b70018  addiu       $s7, $sp, 0x18
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2c4e68: 0x27b6001c  addiu       $s6, $sp, 0x1C
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2c4e6c: 0x0  nop
    ctx->pc = 0x2c4e6cu;
    // NOP
label_2c4e70:
    // 0x2c4e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4e74: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c4e78: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x2c4e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2c4e7c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C4E7Cu;
    {
        const bool branch_taken_0x2c4e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E7Cu;
        // 0x2c4e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e7c) {
            ctx->pc = 0x2C4F48u;
            goto label_2c4f48;
        }
    }
    ctx->pc = 0x2C4E84u;
    // 0x2c4e84: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2c4e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c4e88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c4e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4e98: 0x24f10008  addiu       $s1, $a3, 0x8
    ctx->pc = 0x2c4e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2c4e9c: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x2c4e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2c4ea0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4ea4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c4ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c4ea8: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2c4ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2c4eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4eb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4eb4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4eb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c4eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c4ebc: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c4ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4ec8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4ecc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c4eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4ed0: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x2c4ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c4ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4edc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4ee0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2c4ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c4ee4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c4ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4eec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4ef0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4ef4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c4ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c4ef8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2c4ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c4efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f04: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4f08: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2c4f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2c4f0c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2c4f0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c4f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4f1c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2c4f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c4f20: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x2c4f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c4f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c4f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c4f30: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2c4f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2c4f34: 0xc09714e  jal         func_25C538
    ctx->pc = 0x2C4F34u;
    SET_GPR_U32(ctx, 31, 0x2C4F3Cu);
    ctx->pc = 0x2C4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F34u;
    // 0x2c4f38: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C538u, 0x2C4F34u, 0x2C4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F3Cu;
label_2c4f3c:
    // 0x2c4f3c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C4F3Cu;
    {
        const bool branch_taken_0x2c4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F3Cu;
        // 0x2c4f40: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f3c) {
            ctx->pc = 0x2C4FECu;
            goto label_2c4fec;
        }
    }
    ctx->pc = 0x2C4F44u;
    // 0x2c4f44: 0x0  nop
    ctx->pc = 0x2c4f44u;
    // NOP
label_2c4f48:
    // 0x2c4f48: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c4f4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c4f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c4f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f64: 0x24f10008  addiu       $s1, $a3, 0x8
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2c4f68: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2c4f6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c4f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c4f70: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2c4f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2c4f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c4f80: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x2c4f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c4f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f8c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c4f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4f90: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x2c4f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c4f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4f9c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2c4f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c4fa0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4fac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c4facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c4fb0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c4fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4fbc: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2c4fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2c4fc0: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2c4fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c4fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4fcc: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2c4fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c4fd0: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c4fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4fdc: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2c4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2c4fe0: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x2C4FE0u;
    SET_GPR_U32(ctx, 31, 0x2C4FE8u);
    ctx->pc = 0x2C4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4FE0u;
    // 0x2c4fe4: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x2C4FE0u, 0x2C4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FE8u;
label_2c4fe8:
    // 0x2c4fe8: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x2c4fe8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4fec:
    // 0x2c4fec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c4fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c4ff0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c4ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ff4: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x2c4ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2c4ff8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2c4ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ffc: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2C4FFCu;
    {
        const bool branch_taken_0x2c4ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FFCu;
        // 0x2c5000: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ffc) {
            ctx->pc = 0x2C4E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4e70;
        }
    }
    ctx->pc = 0x2C5004u;
    // 0x2c5004: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2C5004u;
    {
        const bool branch_taken_0x2c5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5004u;
        // 0x2c5008: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5004) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C500Cu;
    // 0x2c500c: 0x0  nop
    ctx->pc = 0x2c500cu;
    // NOP
label_2c5010:
    // 0x2c5010: 0x12a0005f  beqz        $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C5010u;
    {
        const bool branch_taken_0x2c5010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5010u;
        // 0x2c5014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5010) {
            ctx->pc = 0x2C5190u;
            goto label_2c5190;
        }
    }
    ctx->pc = 0x2C5018u;
    // 0x2c5018: 0xc7819324  lwc1        $f1, -0x6CDC($gp)
    ctx->pc = 0x2c5018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c501c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5020:
    // 0x2c5020: 0x851004  sllv        $v0, $a1, $a0
    ctx->pc = 0x2c5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c5024: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x2c5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2c5028: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5028u;
    {
        const bool branch_taken_0x2c5028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5028u;
        // 0x2c502c: 0x24f10008  addiu       $s1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5028) {
            ctx->pc = 0x2C5088u;
            goto label_2c5088;
        }
    }
    ctx->pc = 0x2C5030u;
    // 0x2c5030: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c5034: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2c5034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c503c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c503cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5044: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c5044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c5048: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2c5048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2c504c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c504cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5058: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c5058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c505c: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x2c505cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c5060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c506c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c506cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c5070: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c5074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c507c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C507Cu;
    {
        const bool branch_taken_0x2c507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C507Cu;
        // 0x2c5080: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c507c) {
            ctx->pc = 0x2C50C8u;
            goto label_2c50c8;
        }
    }
    ctx->pc = 0x2C5084u;
    // 0x2c5084: 0x0  nop
    ctx->pc = 0x2c5084u;
    // NOP
label_2c5088:
    // 0x2c5088: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2c5088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c508c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2c508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5098: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c5098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c509c: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2c509cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2c50a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c50a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c50a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c50a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c50a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c50ac: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x2c50acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c50b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c50b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c50b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c50b8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c50b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c50bc: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x2c50bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c50c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c50c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c50c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c50c8:
    // 0x2c50c8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2c50c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c50cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c50ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c50d0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2c50d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50d4: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x2c50d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2c50d8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2C50D8u;
    {
        const bool branch_taken_0x2c50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D8u;
        // 0x2c50dc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d8) {
            ctx->pc = 0x2C5020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5020;
        }
    }
    ctx->pc = 0x2C50E0u;
    // 0x2c50e0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C50E0u;
    {
        const bool branch_taken_0x2c50e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50E0u;
        // 0x2c50e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50e0) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C50E8u;
label_2c50e8:
    // 0x2c50e8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2c50e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c50ec: 0x1440ff3e  bnez        $v0, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x2C50ECu;
    {
        const bool branch_taken_0x2c50ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50ECu;
        // 0x2c50f0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50ec) {
            ctx->pc = 0x2C4DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4de8;
        }
    }
    ctx->pc = 0x2C50F4u;
label_2c50f4:
    // 0x2c50f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c50f8: 0x1122000f  beq         $t1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C50F8u;
    {
        const bool branch_taken_0x2c50f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50F8u;
        // 0x2c50fc: 0x29220004  slti        $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50f8) {
            ctx->pc = 0x2C5138u;
            goto label_2c5138;
        }
    }
    ctx->pc = 0x2C5100u;
    // 0x2c5100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5100u;
    {
        const bool branch_taken_0x2c5100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5100u;
        // 0x2c5104: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5100) {
            ctx->pc = 0x2C5120u;
            goto label_2c5120;
        }
    }
    ctx->pc = 0x2C5108u;
    // 0x2c5108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c510c: 0x51220016  beql        $t1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C510Cu;
    {
        const bool branch_taken_0x2c510c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c510c) {
            ctx->pc = 0x2C5110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C510Cu;
            // 0x2c5110: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5168u;
            goto label_2c5168;
        }
    }
    ctx->pc = 0x2C5114u;
    // 0x2c5114: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C5114u;
    {
        const bool branch_taken_0x2c5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5114) {
            ctx->pc = 0x2C5188u;
            goto label_2c5188;
        }
    }
    ctx->pc = 0x2C511Cu;
    // 0x2c511c: 0x0  nop
    ctx->pc = 0x2c511cu;
    // NOP
label_2c5120:
    // 0x2c5120: 0x1122000b  beq         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5120u;
    {
        const bool branch_taken_0x2c5120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5120u;
        // 0x2c5124: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5120) {
            ctx->pc = 0x2C5150u;
            goto label_2c5150;
        }
    }
    ctx->pc = 0x2C5128u;
    // 0x2c5128: 0x51220013  beql        $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5128u;
    {
        const bool branch_taken_0x2c5128 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5128) {
            ctx->pc = 0x2C512Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5128u;
            // 0x2c512c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5178u;
            goto label_2c5178;
        }
    }
    ctx->pc = 0x2C5130u;
    // 0x2c5130: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5130u;
    {
        const bool branch_taken_0x2c5130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5130) {
            ctx->pc = 0x2C5188u;
            goto label_2c5188;
        }
    }
    ctx->pc = 0x2C5138u;
label_2c5138:
    // 0x2c5138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c513c: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C513Cu;
    SET_GPR_U32(ctx, 31, 0x2C5144u);
    ctx->pc = 0x2C5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C513Cu;
    // 0x2c5140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C513Cu, 0x2C5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5144u;
label_2c5144:
    // 0x2c5144: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5144u;
    {
        const bool branch_taken_0x2c5144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5144u;
        // 0x2c5148: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5144) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C514Cu;
    // 0x2c514c: 0x0  nop
    ctx->pc = 0x2c514cu;
    // NOP
label_2c5150:
    // 0x2c5150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5154: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C5154u;
    SET_GPR_U32(ctx, 31, 0x2C515Cu);
    ctx->pc = 0x2C5158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5154u;
    // 0x2c5158: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C5154u, 0x2C515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C515Cu;
label_2c515c:
    // 0x2c515c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C515Cu;
    {
        const bool branch_taken_0x2c515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C515Cu;
        // 0x2c5160: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c515c) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C5164u;
    // 0x2c5164: 0x0  nop
    ctx->pc = 0x2c5164u;
    // NOP
label_2c5168:
    // 0x2c5168: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C5168u;
    SET_GPR_U32(ctx, 31, 0x2C5170u);
    ctx->pc = 0x2C516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5168u;
    // 0x2c516c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C5168u, 0x2C5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5170u;
label_2c5170:
    // 0x2c5170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5170u;
    {
        const bool branch_taken_0x2c5170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5170u;
        // 0x2c5174: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5170) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C5178u;
label_2c5178:
    // 0x2c5178: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C5178u;
    SET_GPR_U32(ctx, 31, 0x2C5180u);
    ctx->pc = 0x2C517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5178u;
    // 0x2c517c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C5178u, 0x2C5180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5180u;
label_2c5180:
    // 0x2c5180: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5180u;
    {
        const bool branch_taken_0x2c5180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5180u;
        // 0x2c5184: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5180) {
            ctx->pc = 0x2C5194u;
            goto label_2c5194;
        }
    }
    ctx->pc = 0x2C5188u;
label_2c5188:
    // 0x2c5188: 0xc096d52  jal         func_25B548
    ctx->pc = 0x2C5188u;
    SET_GPR_U32(ctx, 31, 0x2C5190u);
    ctx->pc = 0x2C518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5188u;
    // 0x2c518c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x2C5188u, 0x2C5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5190u;
label_2c5190:
    // 0x2c5190: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c5190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c5194:
    // 0x2c5194: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2c5194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5198: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2c5198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c519c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2c519cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c51a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c51a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c51a4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2c51a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c51a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2c51a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c51ac: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2c51acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c51b0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2c51b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c51b4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2c51b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c51b8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2c51b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c51bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C51BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51BCu;
        // 0x2c51c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C51BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C51C4u;
    // 0x2c51c4: 0x0  nop
    ctx->pc = 0x2c51c4u;
    // NOP
    ctx->pc = 0x2c51c8u;
}
