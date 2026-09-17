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

// Function: sub_002C7AA8
// Address: 0x2c7aa8 - 0x2c7e18
void sub_002C7AA8_0x2c7aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7AA8_0x2c7aa8");
#endif

    switch (ctx->pc) {
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7d5cu: goto label_2c7d5c;
        default: break;
    }

    ctx->pc = 0x2c7aa8u;

    // 0x2c7aa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c7aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c7aac: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x2c7aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c7ab0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2c7ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2c7ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c7ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ab8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2c7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2c7abc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c7abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ac0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2c7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2c7ac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ac8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2c7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2c7acc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2c7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2c7ad0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2c7ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2c7ad4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2c7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2c7ad8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2c7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2c7adc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2c7adcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2c7ae0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c7ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c7ae4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C7AE4u;
    {
        const bool branch_taken_0x2c7ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AE4u;
        // 0x2c7ae8: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ae4) {
            ctx->pc = 0x2C7B54u;
            goto label_2c7b54;
        }
    }
    ctx->pc = 0x2C7AECu;
    // 0x2c7aec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c7af0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c7af4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7af8: 0x8c63e340  lw          $v1, -0x1CC0($v1)
    ctx->pc = 0x2c7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959936)));
    // 0x2c7afc: 0x600008  jr          $v1
    ctx->pc = 0x2C7AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7B08u: goto label_2c7b08;
            case 0x2C7B18u: goto label_2c7b18;
            case 0x2C7B28u: goto label_2c7b28;
            case 0x2C7B38u: goto label_2c7b38;
            case 0x2C7B48u: goto label_2c7b48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7AFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C7B04u;
    // 0x2c7b04: 0x0  nop
    ctx->pc = 0x2c7b04u;
    // NOP
label_2c7b08:
    // 0x2c7b08: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c7b0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7B0Cu;
    {
        const bool branch_taken_0x2c7b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B0Cu;
        // 0x2c7b10: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b0c) {
            ctx->pc = 0x2C7B50u;
            goto label_2c7b50;
        }
    }
    ctx->pc = 0x2C7B14u;
    // 0x2c7b14: 0x0  nop
    ctx->pc = 0x2c7b14u;
    // NOP
label_2c7b18:
    // 0x2c7b18: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c7b1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C7B1Cu;
    {
        const bool branch_taken_0x2c7b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B1Cu;
        // 0x2c7b20: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b1c) {
            ctx->pc = 0x2C7B50u;
            goto label_2c7b50;
        }
    }
    ctx->pc = 0x2C7B24u;
    // 0x2c7b24: 0x0  nop
    ctx->pc = 0x2c7b24u;
    // NOP
label_2c7b28:
    // 0x2c7b28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2c7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c7b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7B2Cu;
    {
        const bool branch_taken_0x2c7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B2Cu;
        // 0x2c7b30: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b2c) {
            ctx->pc = 0x2C7B50u;
            goto label_2c7b50;
        }
    }
    ctx->pc = 0x2C7B34u;
    // 0x2c7b34: 0x0  nop
    ctx->pc = 0x2c7b34u;
    // NOP
label_2c7b38:
    // 0x2c7b38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7B3Cu;
    {
        const bool branch_taken_0x2c7b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B3Cu;
        // 0x2c7b40: 0x2415fffc  addiu       $s5, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b3c) {
            ctx->pc = 0x2C7B50u;
            goto label_2c7b50;
        }
    }
    ctx->pc = 0x2C7B44u;
    // 0x2c7b44: 0x0  nop
    ctx->pc = 0x2c7b44u;
    // NOP
label_2c7b48:
    // 0x2c7b48: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c7b4c: 0x2415ffbc  addiu       $s5, $zero, -0x44
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_2c7b50:
    // 0x2c7b50: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2c7b50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2c7b54:
    // 0x2c7b54: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c7b54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c7b58: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c7b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c7b5c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c7b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7b60: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x2c7b60u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7b64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c7b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b68: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c7b68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c7b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b74: 0xc0b19a0  jal         func_2C6680
    ctx->pc = 0x2C7B74u;
    SET_GPR_U32(ctx, 31, 0x2C7B7Cu);
    ctx->pc = 0x2C7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B74u;
    // 0x2c7b78: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6680u, 0x2C7B74u, 0x2C7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B7Cu;
label_2c7b7c:
    // 0x2c7b7c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c7b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c7b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7b84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c7b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c7b88: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2c7b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b8c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c7b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b94: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2c7b94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c7b98:
    // 0x2c7b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b9c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c7ba0: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2c7ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2c7ba4: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C7BA4u;
    {
        const bool branch_taken_0x2c7ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BA4u;
        // 0x2c7ba8: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ba4) {
            ctx->pc = 0x2C7D88u;
            goto label_2c7d88;
        }
    }
    ctx->pc = 0x2C7BACu;
    // 0x2c7bac: 0xc7819364  lwc1        $f1, -0x6C9C($gp)
    ctx->pc = 0x2c7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7bb0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7bb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7BB4u;
    {
        const bool branch_taken_0x2c7bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BB4u;
        // 0x2c7bb8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bb4) {
            ctx->pc = 0x2C7BC8u;
            goto label_2c7bc8;
        }
    }
    ctx->pc = 0x2C7BBCu;
    // 0x2c7bbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7BC0u;
    {
        const bool branch_taken_0x2c7bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BC0u;
        // 0x2c7bc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bc0) {
            ctx->pc = 0x2C7BD0u;
            goto label_2c7bd0;
        }
    }
    ctx->pc = 0x2C7BC8u;
label_2c7bc8:
    // 0x2c7bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7bcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bd0:
    // 0x2c7bd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7bd4: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c7bd4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7bd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7bdc: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7be0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7be0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c7be4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c7be4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7be8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c7be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7bec: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7bf0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7bf4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7bf8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7bfc: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c00: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c04: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c7c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c08: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c0c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c10: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c14: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c7c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c7c18: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c7c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7C1Cu;
    {
        const bool branch_taken_0x2c7c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C1Cu;
        // 0x2c7c20: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c1c) {
            ctx->pc = 0x2C7C30u;
            goto label_2c7c30;
        }
    }
    ctx->pc = 0x2C7C24u;
    // 0x2c7c24: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7c24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7c28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7C28u;
    {
        const bool branch_taken_0x2c7c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C28u;
        // 0x2c7c2c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c28) {
            ctx->pc = 0x2C7C38u;
            goto label_2c7c38;
        }
    }
    ctx->pc = 0x2C7C30u;
label_2c7c30:
    // 0x2c7c30: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7c30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7c34: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c7c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7c38:
    // 0x2c7c38: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2c7c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c3c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2c7c3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c40: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2c7c40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c44: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2c7c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c48: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2c7c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c4c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2c7c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c50: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2c7c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c54: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2c7c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7c58: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x2c7c58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c7c5c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7c60: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7c60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c7c64: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7c64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7c68: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c6c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7c6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7c70: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7c70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c7c74: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7c74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c7c78: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7c78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c7c7c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7c80: 0xc7819368  lwc1        $f1, -0x6C98($gp)
    ctx->pc = 0x2c7c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7C84u;
    {
        const bool branch_taken_0x2c7c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7c84) {
            ctx->pc = 0x2C7C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7C84u;
            // 0x2c7c88: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7C98u;
            goto label_2c7c98;
        }
    }
    ctx->pc = 0x2C7C8Cu;
    // 0x2c7c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7C90u;
    {
        const bool branch_taken_0x2c7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C90u;
        // 0x2c7c94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c90) {
            ctx->pc = 0x2C7C9Cu;
            goto label_2c7c9c;
        }
    }
    ctx->pc = 0x2C7C98u;
label_2c7c98:
    // 0x2c7c98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c9c:
    // 0x2c7c9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7ca0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c7ca0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7ca4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7ca8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7cac: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7cacu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c7cb0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c7cb0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cb4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c7cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cb8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cbc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cc0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cc4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7cc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cc8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7ccc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cd0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c7cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cd4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7cd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cd8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7cdc: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7ce0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c7ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c7ce4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c7ce4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7ce8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7CE8u;
    {
        const bool branch_taken_0x2c7ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CE8u;
        // 0x2c7cec: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ce8) {
            ctx->pc = 0x2C7D00u;
            goto label_2c7d00;
        }
    }
    ctx->pc = 0x2C7CF0u;
    // 0x2c7cf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7cf0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7cf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7CF4u;
    {
        const bool branch_taken_0x2c7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CF4u;
        // 0x2c7cf8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cf4) {
            ctx->pc = 0x2C7D08u;
            goto label_2c7d08;
        }
    }
    ctx->pc = 0x2C7CFCu;
    // 0x2c7cfc: 0x0  nop
    ctx->pc = 0x2c7cfcu;
    // NOP
label_2c7d00:
    // 0x2c7d00: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7d00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7d04: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c7d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7d08:
    // 0x2c7d08: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2c7d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d0c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2c7d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d10: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2c7d10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d14: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2c7d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7d18: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2c7d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d1c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2c7d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7d20: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2c7d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d24: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2c7d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7d28: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2c7d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d2c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2c7d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7d30: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2c7d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d34: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7d38: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c7d3c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7d40: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7d40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c7d44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7d4c: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2c7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7d50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c7d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d54: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2C7D54u;
    SET_GPR_U32(ctx, 31, 0x2C7D5Cu);
    ctx->pc = 0x2C7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D54u;
    // 0x2c7d58: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2C7D54u, 0x2C7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D5Cu;
label_2c7d5c:
    // 0x2c7d5c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d60: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x2c7d60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c7d64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7d68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c7d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7d6c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2c7d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2c7d70: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2c7d70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2c7d74: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2c7d74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2c7d78: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2c7d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c7d7c: 0x46000004  c1          0x4
    ctx->pc = 0x2c7d7cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c7d80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7D80u;
    {
        const bool branch_taken_0x2c7d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D80u;
        // 0x2c7d84: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d80) {
            ctx->pc = 0x2C7DA0u;
            goto label_2c7da0;
        }
    }
    ctx->pc = 0x2C7D88u;
label_2c7d88:
    // 0x2c7d88: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d8c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d90: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c7d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c7d94: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c7d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c7d98: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c7d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c7d9c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2c7d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2c7da0:
    // 0x2c7da0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c7da4: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c7da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c7da8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2c7da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c7dac: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2C7DACu;
    {
        const bool branch_taken_0x2c7dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DACu;
        // 0x2c7db0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7dac) {
            ctx->pc = 0x2C7B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7b98;
        }
    }
    ctx->pc = 0x2C7DB4u;
    // 0x2c7db4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2c7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7db8: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2c7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7dbc: 0xc6630010  lwc1        $f3, 0x10($s3)
    ctx->pc = 0x2c7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7dc0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c7dc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c7dc4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7dc8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2c7dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2c7dcc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c7dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c7dd0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2c7dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c7dd4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2c7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7dd8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c7dd8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c7ddc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2c7ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7de0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c7de0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c7de4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2c7de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c7de8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7dec: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2c7decu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c7df0: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2c7df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2c7df4: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x2c7df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2c7df8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2c7df8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c7dfc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2c7dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e00: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2c7e00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c7e04: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2c7e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c7e08: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2c7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7e0c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E10u;
        // 0x2c7e14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7E18u;
}
