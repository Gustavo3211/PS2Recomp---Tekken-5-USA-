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

// Function: sub_00200ED0
// Address: 0x200ed0 - 0x201018
void sub_00200ED0_0x200ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200ED0_0x200ed0");
#endif

    switch (ctx->pc) {
        case 0x200f44u: goto label_200f44;
        case 0x200ff8u: goto label_200ff8;
        default: break;
    }

    ctx->pc = 0x200ed0u;

    // 0x200ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200edc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200ee0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x200ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x200ee4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x200EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200EE4u;
            // 0x200ee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200EECu;
    // 0x200eec: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x200eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x200ef0: 0x26030820  addiu       $v1, $s0, 0x820
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x200ef4: 0x26080818  addiu       $t0, $s0, 0x818
    ctx->pc = 0x200ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x200ef8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x200ef8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x200efc: 0x8cc7003c  lw          $a3, 0x3C($a2)
    ctx->pc = 0x200efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x200f00: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x200f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x200f04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x200F04u;
    {
        const bool branch_taken_0x200f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F04u;
        // 0x200f08: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f04) {
            ctx->pc = 0x200F50u;
            goto label_200f50;
        }
    }
    ctx->pc = 0x200F0Cu;
    // 0x200f0c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200F0Cu;
    {
        const bool branch_taken_0x200f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f0c) {
            ctx->pc = 0x200F28u;
            goto label_200f28;
        }
    }
    ctx->pc = 0x200F14u;
    // 0x200f14: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x200f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200f1c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200f1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200f20: 0x4503003a  bc1tl       . + 4 + (0x3A << 2)
    ctx->pc = 0x200F20u;
    {
        const bool branch_taken_0x200f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200f20) {
            ctx->pc = 0x200F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F20u;
            // 0x200f24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200F28u;
label_200f28:
    // 0x200f28: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x200f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x200f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200f30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x200f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200f34: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x200f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200f38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x200f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x200f3c: 0xc0959a2  jal         func_256688
    ctx->pc = 0x200F3Cu;
    SET_GPR_U32(ctx, 31, 0x200F44u);
    ctx->pc = 0x200F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F3Cu;
    // 0x200f40: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256688u, 0x200F3Cu, 0x200F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F44u;
label_200f44:
    // 0x200f44: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x200F44u;
    {
        const bool branch_taken_0x200f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F44u;
        // 0x200f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f44) {
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200F4Cu;
    // 0x200f4c: 0x0  nop
    ctx->pc = 0x200f4cu;
    // NOP
label_200f50:
    // 0x200f50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x200f54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x200f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x200f58: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200F58u;
    {
        const bool branch_taken_0x200f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F58u;
        // 0x200f5c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f58) {
            ctx->pc = 0x200FA8u;
            goto label_200fa8;
        }
    }
    ctx->pc = 0x200F60u;
    // 0x200f60: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x200f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x200f64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x200F64u;
    {
        const bool branch_taken_0x200f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f64) {
            ctx->pc = 0x200FA8u;
            goto label_200fa8;
        }
    }
    ctx->pc = 0x200F6Cu;
    // 0x200f6c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200F6Cu;
    {
        const bool branch_taken_0x200f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f6c) {
            ctx->pc = 0x200F88u;
            goto label_200f88;
        }
    }
    ctx->pc = 0x200F74u;
    // 0x200f74: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x200f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x200f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200f7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200f7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200f80: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x200F80u;
    {
        const bool branch_taken_0x200f80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x200F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F80u;
        // 0x200f84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f80) {
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200F88u;
label_200f88:
    // 0x200f88: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x200f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200f90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200f94: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x200f94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200f98: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x200f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x200f9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x200F9Cu;
    {
        const bool branch_taken_0x200f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F9Cu;
        // 0x200fa0: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f9c) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200FA4u;
    // 0x200fa4: 0x0  nop
    ctx->pc = 0x200fa4u;
    // NOP
label_200fa8:
    // 0x200fa8: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x200FA8u;
    {
        const bool branch_taken_0x200fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x200fa8) {
            ctx->pc = 0x200FD8u;
            goto label_200fd8;
        }
    }
    ctx->pc = 0x200FB0u;
    // 0x200fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200fb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200fb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200fbc: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x200FBCu;
    {
        const bool branch_taken_0x200fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200fbc) {
            ctx->pc = 0x200FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FBCu;
            // 0x200fc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200FC4u;
    // 0x200fc4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x200fc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200fcc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200fccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200fd0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x200FD0u;
    {
        const bool branch_taken_0x200fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200fd0) {
            ctx->pc = 0x200FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FD0u;
            // 0x200fd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20100Cu;
            goto label_20100c;
        }
    }
    ctx->pc = 0x200FD8u;
label_200fd8:
    // 0x200fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200fe0: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x200fe4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x200fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200fe8: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x200fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x200fec: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x200fecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x200ff0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x200FF0u;
    SET_GPR_U32(ctx, 31, 0x200FF8u);
    ctx->pc = 0x200FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FF0u;
    // 0x200ff4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x200FF0u, 0x200FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF8u;
label_200ff8:
    // 0x200ff8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x200ffc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x200ffcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x201000: 0x2010  mfhi        $a0
    ctx->pc = 0x201000u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x201004: 0xa60402c6  sh          $a0, 0x2C6($s0)
    ctx->pc = 0x201004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 710), (uint16_t)GPR_U32(ctx, 4));
label_201008:
    // 0x201008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20100c:
    // 0x20100c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201010: 0x3e00008  jr          $ra
    ctx->pc = 0x201010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201018u;
}
