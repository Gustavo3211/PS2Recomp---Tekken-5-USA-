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

// Function: sub_0029AC20
// Address: 0x29ac20 - 0x29ae00
void sub_0029AC20_0x29ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC20_0x29ac20");
#endif

    switch (ctx->pc) {
        case 0x29acc8u: goto label_29acc8;
        case 0x29acf8u: goto label_29acf8;
        case 0x29ad68u: goto label_29ad68;
        case 0x29ad80u: goto label_29ad80;
        case 0x29adc0u: goto label_29adc0;
        default: break;
    }

    ctx->pc = 0x29ac20u;

    // 0x29ac20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29ac24: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x29ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29ac28: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29ac2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29ac30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29ac34: 0x478823  subu        $s1, $v0, $a3
    ctx->pc = 0x29ac34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29ac38: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29ac3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29ac3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ac44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ac44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac48: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29ac4c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29ac4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac50: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x29ac50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29ac54: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29ac58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ac5c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29ac60: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29ac64: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29ac68: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29ac6c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29ac70: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29ac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29ac74: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x29ac74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x29ac78: 0xc420c648  lwc1        $f0, -0x39B8($at)
    ctx->pc = 0x29ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ac80: 0x8fc30150  lw          $v1, 0x150($fp)
    ctx->pc = 0x29ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 336)));
    // 0x29ac84: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x29ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac88: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29ac8c: 0x2489c140  addiu       $t1, $a0, -0x3EC0
    ctx->pc = 0x29ac8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
    // 0x29ac90: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x29ac90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x29ac94: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x29ac94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x29ac98: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x29ac98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x29ac9c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x29ac9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29aca0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x29aca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29aca4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x29aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x29aca8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29acac: 0x2484c118  addiu       $a0, $a0, -0x3EE8
    ctx->pc = 0x29acacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
    // 0x29acb0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29acb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29acb4: 0x8c75ffec  lw          $s5, -0x14($v1)
    ctx->pc = 0x29acb4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
    // 0x29acb8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x29acb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29acbc: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29acbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29acc0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29ACC0u;
    SET_GPR_U32(ctx, 31, 0x29ACC8u);
    ctx->pc = 0x29ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACC0u;
    // 0x29acc4: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29ACC0u, 0x29ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACC8u;
label_29acc8:
    // 0x29acc8: 0x5aa00041  blezl       $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x29ACC8u;
    {
        const bool branch_taken_0x29acc8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x29acc8) {
            ctx->pc = 0x29ACCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ACC8u;
            // 0x29accc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ADD0u;
            goto label_29add0;
        }
    }
    ctx->pc = 0x29ACD0u;
    // 0x29acd0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x29acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x29acd4: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x29acd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29acdc: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x29acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x29ace0: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x29ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x29ace4: 0x24170064  addiu       $s7, $zero, 0x64
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ace8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x29ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x29acec: 0x2416003c  addiu       $s6, $zero, 0x3C
    ctx->pc = 0x29acecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x29acf0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29acf4: 0x0  nop
    ctx->pc = 0x29acf4u;
    // NOP
label_29acf8:
    // 0x29acf8: 0x8fc40150  lw          $a0, 0x150($fp)
    ctx->pc = 0x29acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 336)));
    // 0x29acfc: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x29acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x29ad00: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x29ad00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x29ad04: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x29ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x29ad08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29ad0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29ad10: 0x8c62ffe4  lw          $v0, -0x1C($v1)
    ctx->pc = 0x29ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x29ad14: 0x57001a  div         $zero, $v0, $s7
    ctx->pc = 0x29ad14u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29ad18: 0x8012  mflo        $s0
    ctx->pc = 0x29ad18u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x29ad1c: 0x9010  mfhi        $s2
    ctx->pc = 0x29ad1cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x29ad20: 0x216001a  div         $zero, $s0, $s6
    ctx->pc = 0x29ad20u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29ad24: 0x8812  mflo        $s1
    ctx->pc = 0x29ad24u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x29ad28: 0x8010  mfhi        $s0
    ctx->pc = 0x29ad28u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x29ad2c: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x29ad2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29ad30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AD30u;
    {
        const bool branch_taken_0x29ad30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD30u;
        // 0x29ad34: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad30) {
            ctx->pc = 0x29AD44u;
            goto label_29ad44;
        }
    }
    ctx->pc = 0x29AD38u;
    // 0x29ad38: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x29ad38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29ad3c: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x29ad3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29ad40: 0x2410003b  addiu       $s0, $zero, 0x3B
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_29ad44:
    // 0x29ad44: 0x5660000b  bnel        $s3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29AD44u;
    {
        const bool branch_taken_0x29ad44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ad44) {
            ctx->pc = 0x29AD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AD44u;
            // 0x29ad48: 0x3c080015  lui         $t0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AD74u;
            goto label_29ad74;
        }
    }
    ctx->pc = 0x29AD4Cu;
    // 0x29ad4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ad50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AD50u;
    {
        const bool branch_taken_0x29ad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD50u;
        // 0x29ad54: 0x8fa70018  lw          $a3, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad50) {
            ctx->pc = 0x29AD70u;
            goto label_29ad70;
        }
    }
    ctx->pc = 0x29AD58u;
    // 0x29ad58: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x29ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x29ad5c: 0x24443f10  addiu       $a0, $v0, 0x3F10
    ctx->pc = 0x29ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16144));
    // 0x29ad60: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AD60u;
    SET_GPR_U32(ctx, 31, 0x29AD68u);
    ctx->pc = 0x29AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD60u;
    // 0x29ad64: 0x2872824  and         $a1, $s4, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AD60u, 0x29AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD68u;
label_29ad68:
    // 0x29ad68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29AD68u;
    {
        const bool branch_taken_0x29ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD68u;
        // 0x29ad6c: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad68) {
            ctx->pc = 0x29AD84u;
            goto label_29ad84;
        }
    }
    ctx->pc = 0x29AD70u;
label_29ad70:
    // 0x29ad70: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x29ad70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
label_29ad74:
    // 0x29ad74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad78: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AD78u;
    SET_GPR_U32(ctx, 31, 0x29AD80u);
    ctx->pc = 0x29AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD78u;
    // 0x29ad7c: 0x25043f10  addiu       $a0, $t0, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AD78u, 0x29AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD80u;
label_29ad80:
    // 0x29ad80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_29ad84:
    // 0x29ad84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29ad88: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x29ad8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29ad8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29ad98: 0x2444c128  addiu       $a0, $v0, -0x3ED8
    ctx->pc = 0x29ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951208));
    // 0x29ad9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29ad9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x29ada0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29ada4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada8: 0x240501e5  addiu       $a1, $zero, 0x1E5
    ctx->pc = 0x29ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
    // 0x29adac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29adacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29adb0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29adb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29adb4: 0x63023  negu        $a2, $a2
    ctx->pc = 0x29adb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x29adb8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29ADB8u;
    SET_GPR_U32(ctx, 31, 0x29ADC0u);
    ctx->pc = 0x29ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADB8u;
    // 0x29adbc: 0x24c600d6  addiu       $a2, $a2, 0xD6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 214));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29ADB8u, 0x29ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADC0u;
label_29adc0:
    // 0x29adc0: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x29adc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29adc4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x29ADC4u;
    {
        const bool branch_taken_0x29adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADC4u;
        // 0x29adc8: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adc4) {
            ctx->pc = 0x29ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29acf8;
        }
    }
    ctx->pc = 0x29ADCCu;
    // 0x29adcc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29adccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29add0:
    // 0x29add0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29add0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29add4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29add4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29add8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29add8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29addc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29addcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ade0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29ade0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29ade4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29ade4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ade8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29adec: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29adecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29adf0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29adf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29adf4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x29adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x29ADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADF8u;
        // 0x29adfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE00u;
}
