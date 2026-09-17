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

// Function: sub_002C7E18
// Address: 0x2c7e18 - 0x2c8188
void sub_002C7E18_0x2c7e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7E18_0x2c7e18");
#endif

    switch (ctx->pc) {
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c80ccu: goto label_2c80cc;
        default: break;
    }

    ctx->pc = 0x2c7e18u;

    // 0x2c7e18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c7e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c7e1c: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x2c7e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c7e20: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2c7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2c7e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c7e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e28: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2c7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2c7e2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c7e2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e30: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2c7e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2c7e34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e38: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2c7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2c7e3c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2c7e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2c7e40: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2c7e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2c7e44: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2c7e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2c7e48: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2c7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x2c7e4c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2c7e4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2c7e50: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c7e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2c7e54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C7E54u;
    {
        const bool branch_taken_0x2c7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E54u;
        // 0x2c7e58: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e54) {
            ctx->pc = 0x2C7EC4u;
            goto label_2c7ec4;
        }
    }
    ctx->pc = 0x2C7E5Cu;
    // 0x2c7e5c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c7e60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c7e64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7e68: 0x8c63e360  lw          $v1, -0x1CA0($v1)
    ctx->pc = 0x2c7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x2c7e6c: 0x600008  jr          $v1
    ctx->pc = 0x2C7E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7E78u: goto label_2c7e78;
            case 0x2C7E88u: goto label_2c7e88;
            case 0x2C7E98u: goto label_2c7e98;
            case 0x2C7EA8u: goto label_2c7ea8;
            case 0x2C7EB8u: goto label_2c7eb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C7E74u;
    // 0x2c7e74: 0x0  nop
    ctx->pc = 0x2c7e74u;
    // NOP
label_2c7e78:
    // 0x2c7e78: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c7e7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7E7Cu;
    {
        const bool branch_taken_0x2c7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E7Cu;
        // 0x2c7e80: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e7c) {
            ctx->pc = 0x2C7EC0u;
            goto label_2c7ec0;
        }
    }
    ctx->pc = 0x2C7E84u;
    // 0x2c7e84: 0x0  nop
    ctx->pc = 0x2c7e84u;
    // NOP
label_2c7e88:
    // 0x2c7e88: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c7e8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C7E8Cu;
    {
        const bool branch_taken_0x2c7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E8Cu;
        // 0x2c7e90: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e8c) {
            ctx->pc = 0x2C7EC0u;
            goto label_2c7ec0;
        }
    }
    ctx->pc = 0x2C7E94u;
    // 0x2c7e94: 0x0  nop
    ctx->pc = 0x2c7e94u;
    // NOP
label_2c7e98:
    // 0x2c7e98: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c7e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7E9Cu;
    {
        const bool branch_taken_0x2c7e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E9Cu;
        // 0x2c7ea0: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e9c) {
            ctx->pc = 0x2C7EC0u;
            goto label_2c7ec0;
        }
    }
    ctx->pc = 0x2C7EA4u;
    // 0x2c7ea4: 0x0  nop
    ctx->pc = 0x2c7ea4u;
    // NOP
label_2c7ea8:
    // 0x2c7ea8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7EACu;
    {
        const bool branch_taken_0x2c7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EACu;
        // 0x2c7eb0: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7eac) {
            ctx->pc = 0x2C7EC0u;
            goto label_2c7ec0;
        }
    }
    ctx->pc = 0x2C7EB4u;
    // 0x2c7eb4: 0x0  nop
    ctx->pc = 0x2c7eb4u;
    // NOP
label_2c7eb8:
    // 0x2c7eb8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c7ebc: 0x2415ffbc  addiu       $s5, $zero, -0x44
    ctx->pc = 0x2c7ebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_2c7ec0:
    // 0x2c7ec0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2c7ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2c7ec4:
    // 0x2c7ec4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c7ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c7ec8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c7ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c7ecc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7ed0: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x2c7ed0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ed4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c7ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ed8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c7ed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7edc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c7edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ee4: 0xc0b19a0  jal         func_2C6680
    ctx->pc = 0x2C7EE4u;
    SET_GPR_U32(ctx, 31, 0x2C7EECu);
    ctx->pc = 0x2C7EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7EE4u;
    // 0x2c7ee8: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6680u, 0x2C7EE4u, 0x2C7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EECu;
label_2c7eec:
    // 0x2c7eec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c7eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c7ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7ef4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c7ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c7ef8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2c7ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7efc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c7efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f04: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c7f08:
    // 0x2c7f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7f0c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c7f10: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2c7f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2c7f14: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C7F14u;
    {
        const bool branch_taken_0x2c7f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F14u;
        // 0x2c7f18: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f14) {
            ctx->pc = 0x2C80F8u;
            goto label_2c80f8;
        }
    }
    ctx->pc = 0x2C7F1Cu;
    // 0x2c7f1c: 0xc781936c  lwc1        $f1, -0x6C94($gp)
    ctx->pc = 0x2c7f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f20: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7f24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7F24u;
    {
        const bool branch_taken_0x2c7f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F24u;
        // 0x2c7f28: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f24) {
            ctx->pc = 0x2C7F38u;
            goto label_2c7f38;
        }
    }
    ctx->pc = 0x2C7F2Cu;
    // 0x2c7f2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7f2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7f30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7F30u;
    {
        const bool branch_taken_0x2c7f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F30u;
        // 0x2c7f34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f30) {
            ctx->pc = 0x2C7F40u;
            goto label_2c7f40;
        }
    }
    ctx->pc = 0x2C7F38u;
label_2c7f38:
    // 0x2c7f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f40:
    // 0x2c7f40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7f44: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c7f44u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7f48: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7f4c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7f50: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7f50u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c7f54: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c7f54u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f58: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c7f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f5c: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f60: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f64: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f68: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f6c: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f70: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f74: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c7f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f78: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f7c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f80: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f84: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c7f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c7f88: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c7f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7f8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7F8Cu;
    {
        const bool branch_taken_0x2c7f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F8Cu;
        // 0x2c7f90: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f8c) {
            ctx->pc = 0x2C7FA0u;
            goto label_2c7fa0;
        }
    }
    ctx->pc = 0x2C7F94u;
    // 0x2c7f94: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7f94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7f98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7F98u;
    {
        const bool branch_taken_0x2c7f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F98u;
        // 0x2c7f9c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f98) {
            ctx->pc = 0x2C7FA8u;
            goto label_2c7fa8;
        }
    }
    ctx->pc = 0x2C7FA0u;
label_2c7fa0:
    // 0x2c7fa0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7fa0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7fa4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c7fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7fa8:
    // 0x2c7fa8: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2c7fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fac: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2c7facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fb0: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2c7fb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fb4: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2c7fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fb8: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2c7fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fbc: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2c7fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fc0: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2c7fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fc4: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2c7fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7fc8: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x2c7fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c7fcc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7fccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7fd0: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c7fd4: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7fd8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7fdc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7fe0: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7fe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c7fe4: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7fe4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c7fe8: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7fe8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c7fec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7ff0: 0xc7819370  lwc1        $f1, -0x6C90($gp)
    ctx->pc = 0x2c7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ff4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7FF4u;
    {
        const bool branch_taken_0x2c7ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7ff4) {
            ctx->pc = 0x2C7FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FF4u;
            // 0x2c7ff8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8008u;
            goto label_2c8008;
        }
    }
    ctx->pc = 0x2C7FFCu;
    // 0x2c7ffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8000u;
    {
        const bool branch_taken_0x2c8000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8000u;
        // 0x2c8004: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8000) {
            ctx->pc = 0x2C800Cu;
            goto label_2c800c;
        }
    }
    ctx->pc = 0x2C8008u;
label_2c8008:
    // 0x2c8008: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c8008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c800c:
    // 0x2c800c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c800cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c8010: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c8010u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c8014: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c8014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c8018: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c8018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c801c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c801cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c8020: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c8020u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c8024: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c8024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c8028: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c8028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c802c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c802cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8030: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c8030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8034: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c8034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8038: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c8038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c803c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c803cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8040: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c8040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c8044: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c8044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8048: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c8048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c804c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c804cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c8050: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c8050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c8054: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c8054u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8058: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8058u;
    {
        const bool branch_taken_0x2c8058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8058u;
        // 0x2c805c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8058) {
            ctx->pc = 0x2C8070u;
            goto label_2c8070;
        }
    }
    ctx->pc = 0x2C8060u;
    // 0x2c8060: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c8060u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c8064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8064u;
    {
        const bool branch_taken_0x2c8064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8064u;
        // 0x2c8068: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8064) {
            ctx->pc = 0x2C8078u;
            goto label_2c8078;
        }
    }
    ctx->pc = 0x2C806Cu;
    // 0x2c806c: 0x0  nop
    ctx->pc = 0x2c806cu;
    // NOP
label_2c8070:
    // 0x2c8070: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c8070u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c8074: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c8074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c8078:
    // 0x2c8078: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2c8078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c807c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2c807cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8080: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2c8080u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c8084: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2c8084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c8088: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2c8088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c808c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2c808cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c8090: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2c8090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c8094: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2c8094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c8098: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2c8098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c809c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2c809cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c80a0: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2c80a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c80a4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c80a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c80a8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c80a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c80ac: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c80acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c80b0: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c80b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c80b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c80b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c80b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c80b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c80bc: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2c80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c80c0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c80c4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2C80C4u;
    SET_GPR_U32(ctx, 31, 0x2C80CCu);
    ctx->pc = 0x2C80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C80C4u;
    // 0x2c80c8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2C80C4u, 0x2C80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80CCu;
label_2c80cc:
    // 0x2c80cc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2c80ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c80d0: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x2c80d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c80d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c80d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c80d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c80d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c80dc: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2c80dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2c80e0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2c80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2c80e4: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2c80e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2c80e8: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2c80e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c80ec: 0x46000004  c1          0x4
    ctx->pc = 0x2c80ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c80f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C80F0u;
    {
        const bool branch_taken_0x2c80f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80F0u;
        // 0x2c80f4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80f0) {
            ctx->pc = 0x2C8110u;
            goto label_2c8110;
        }
    }
    ctx->pc = 0x2C80F8u;
label_2c80f8:
    // 0x2c80f8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80fc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8100: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c8100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c8104: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c8104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c8108: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c8108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c810c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2c810cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2c8110:
    // 0x2c8110: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c8110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c8114: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c8118: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2c8118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c811c: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2C811Cu;
    {
        const bool branch_taken_0x2c811c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C811Cu;
        // 0x2c8120: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c811c) {
            ctx->pc = 0x2C7F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7f08;
        }
    }
    ctx->pc = 0x2C8124u;
    // 0x2c8124: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2c8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8128: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2c8128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c812c: 0xc6630010  lwc1        $f3, 0x10($s3)
    ctx->pc = 0x2c812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8130: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c8130u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c8134: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8138: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2c8138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2c813c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c813cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c8140: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2c8140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8144: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2c8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8148: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c8148u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c814c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2c814cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8150: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c8150u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c8154: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2c8154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c8158: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c815c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2c815cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c8160: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2c8160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2c8164: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x2c8164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2c8168: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2c8168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c816c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2c816cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c8170: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2c8170u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c8174: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2c8174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c8178: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c817c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8180: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8180u;
        // 0x2c8184: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8188u;
}
