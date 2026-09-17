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

// Function: sub_001F7EA0
// Address: 0x1f7ea0 - 0x1f8240
void sub_001F7EA0_0x1f7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EA0_0x1f7ea0");
#endif

    switch (ctx->pc) {
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f81e4u: goto label_1f81e4;
        default: break;
    }

    ctx->pc = 0x1f7ea0u;

    // 0x1f7ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f7ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ea8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f7eac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f7eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f7eb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7eb4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1f7eb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f7eb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ebc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1f7ec0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1f7ec4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f7ec8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f7ecc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f7ed0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1f7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1f7ed4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1f7ed8: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x1f7ed8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f7edc: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1f7edcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1f7ee0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1f7ee0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f7ee4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f7ee4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f7ee8: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F7EE8u;
    SET_GPR_U32(ctx, 31, 0x1F7EF0u);
    ctx->pc = 0x1F7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EE8u;
    // 0x1f7eec: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F7EE8u, 0x1F7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EF0u;
label_1f7ef0:
    // 0x1f7ef0: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F7EF0u;
    SET_GPR_U32(ctx, 31, 0x1F7EF8u);
    ctx->pc = 0x1F7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EF0u;
    // 0x1f7ef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F7EF0u, 0x1F7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EF8u;
label_1f7ef8:
    // 0x1f7ef8: 0x8f83c898  lw          $v1, -0x3768($gp)
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
    // 0x1f7efc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f7efcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7f04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f7f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7f0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f7f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7f14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f7f18: 0x244300fa  addiu       $v1, $v0, 0xFA
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x1f7f1c: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1f7f20: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f7f24: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F7F24u;
    SET_GPR_U32(ctx, 31, 0x1F7F2Cu);
    ctx->pc = 0x1F7F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F24u;
    // 0x1f7f28: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F7F24u, 0x1F7F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F2Cu;
label_1f7f2c:
    // 0x1f7f2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f7f2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f30: 0x1ae0007f  blez        $s7, . + 4 + (0x7F << 2)
    ctx->pc = 0x1F7F30u;
    {
        const bool branch_taken_0x1f7f30 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1F7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F30u;
        // 0x1f7f34: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f30) {
            ctx->pc = 0x1F8130u;
            goto label_1f8130;
        }
    }
    ctx->pc = 0x1F7F38u;
    // 0x1f7f38: 0xc7988190  lwc1        $f24, -0x7E70($gp)
    ctx->pc = 0x1f7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f7f3c: 0x241e08d0  addiu       $fp, $zero, 0x8D0
    ctx->pc = 0x1f7f3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1f7f40: 0xc7948194  lwc1        $f20, -0x7E6C($gp)
    ctx->pc = 0x1f7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7f44: 0xc7978198  lwc1        $f23, -0x7E68($gp)
    ctx->pc = 0x1f7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f7f48: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f7f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f7f4c: 0xc795819c  lwc1        $f21, -0x7E64($gp)
    ctx->pc = 0x1f7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7f50: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7f54: 0x0  nop
    ctx->pc = 0x1f7f54u;
    // NOP
label_1f7f58:
    // 0x1f7f58: 0xc091824  jal         func_246090
    ctx->pc = 0x1F7F58u;
    SET_GPR_U32(ctx, 31, 0x1F7F60u);
    ctx->pc = 0x1F7F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F58u;
    // 0x1f7f5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246090u, 0x1F7F58u, 0x1F7F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F60u;
label_1f7f60:
    // 0x1f7f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7f64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f7f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f68: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1f7f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f7f6c: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1F7F6Cu;
    {
        const bool branch_taken_0x1f7f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f6c) {
            ctx->pc = 0x1F7F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F6Cu;
            // 0x1f7f70: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8120u;
            goto label_1f8120;
        }
    }
    ctx->pc = 0x1F7F74u;
    // 0x1f7f74: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1f7f78: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f7f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f7f7c: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x1F7F7Cu;
    {
        const bool branch_taken_0x1f7f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f7c) {
            ctx->pc = 0x1F7F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F7Cu;
            // 0x1f7f80: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8120u;
            goto label_1f8120;
        }
    }
    ctx->pc = 0x1F7F84u;
    // 0x1f7f84: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
label_1f7f88:
    // 0x1f7f88: 0x276202a  slt         $a0, $s3, $s6
    ctx->pc = 0x1f7f88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1f7f8c: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1F7F8Cu;
    {
        const bool branch_taken_0x1f7f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F8Cu;
        // 0x1f7f90: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f8c) {
            ctx->pc = 0x1F8130u;
            goto label_1f8130;
        }
    }
    ctx->pc = 0x1F7F94u;
    // 0x1f7f94: 0x2651818  mult        $v1, $s3, $a1
    ctx->pc = 0x1f7f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f7f98: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f7f9c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f7fa0: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x1f7fa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f7fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7FA4u;
    {
        const bool branch_taken_0x1f7fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FA4u;
        // 0x1f7fa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fa4) {
            ctx->pc = 0x1F7FB8u;
            goto label_1f7fb8;
        }
    }
    ctx->pc = 0x1F7FACu;
    // 0x1f7fac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7FACu;
    {
        const bool branch_taken_0x1f7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FACu;
        // 0x1f7fb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fac) {
            ctx->pc = 0x1F7FB8u;
            goto label_1f7fb8;
        }
    }
    ctx->pc = 0x1F7FB4u;
    // 0x1f7fb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f7fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fb8:
    // 0x1f7fb8: 0x5060fff3  beql        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F7FB8u;
    {
        const bool branch_taken_0x1f7fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7fb8) {
            ctx->pc = 0x1F7FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7FB8u;
            // 0x1f7fbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7f88;
        }
    }
    ctx->pc = 0x1F7FC0u;
    // 0x1f7fc0: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F7FC0u;
    {
        const bool branch_taken_0x1f7fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC0u;
        // 0x1f7fc4: 0x27e1018  mult        $v0, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fc0) {
            ctx->pc = 0x1F812Cu;
            goto label_1f812c;
        }
    }
    ctx->pc = 0x1F7FC8u;
    // 0x1f7fc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7fcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f7fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fd0: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F7FD0u;
    SET_GPR_U32(ctx, 31, 0x1F7FD8u);
    ctx->pc = 0x1F7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FD0u;
    // 0x1f7fd4: 0x51a021  addu        $s4, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F7FD0u, 0x1F7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FD8u;
label_1f7fd8:
    // 0x1f7fd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7fdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f7fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fe0: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F7FE0u;
    SET_GPR_U32(ctx, 31, 0x1F7FE8u);
    ctx->pc = 0x1F7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FE0u;
    // 0x1f7fe4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F7FE0u, 0x1F7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FE8u;
label_1f7fe8:
    // 0x1f7fe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f7fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ff0: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x1F7FF0u;
    SET_GPR_U32(ctx, 31, 0x1F7FF8u);
    ctx->pc = 0x1F7FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FF0u;
    // 0x1f7ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x1F7FF0u, 0x1F7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF8u;
label_1f7ff8:
    // 0x1f7ff8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ffc: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f7ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8000: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8000u;
    {
        const bool branch_taken_0x1f8000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8000u;
        // 0x1f8004: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8000) {
            ctx->pc = 0x1F8010u;
            goto label_1f8010;
        }
    }
    ctx->pc = 0x1F8008u;
    // 0x1f8008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8008u;
    {
        const bool branch_taken_0x1f8008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8008u;
        // 0x1f800c: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8008) {
            ctx->pc = 0x1F801Cu;
            goto label_1f801c;
        }
    }
    ctx->pc = 0x1F8010u;
label_1f8010:
    // 0x1f8010: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f8010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8014: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8014u;
    {
        const bool branch_taken_0x1f8014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8014) {
            ctx->pc = 0x1F8018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8014u;
            // 0x1f8018: 0x46140040  add.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F801Cu;
            goto label_1f801c;
        }
    }
    ctx->pc = 0x1F801Cu;
label_1f801c:
    // 0x1f801c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f801cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8020: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f8020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8024: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8024u;
    {
        const bool branch_taken_0x1f8024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8024) {
            ctx->pc = 0x1F8028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8024u;
            // 0x1f8028: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F802Cu;
            goto label_1f802c;
        }
    }
    ctx->pc = 0x1F802Cu;
label_1f802c:
    // 0x1f802c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f802cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f8030: 0xc78281a0  lwc1        $f2, -0x7E60($gp)
    ctx->pc = 0x1f8030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8034: 0x27e1018  mult        $v0, $s3, $fp
    ctx->pc = 0x1f8034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f8038: 0x0  nop
    ctx->pc = 0x1f8038u;
    // NOP
    // 0x1f803c: 0x0  nop
    ctx->pc = 0x1f803cu;
    // NOP
    // 0x1f8040: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f8040u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f8044: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f8048: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f804c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f804cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8050: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1f8050u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8054: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8058: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f8058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f805c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F805Cu;
    {
        const bool branch_taken_0x1f805c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F805Cu;
        // 0x1f8060: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f805c) {
            ctx->pc = 0x1F8070u;
            goto label_1f8070;
        }
    }
    ctx->pc = 0x1F8064u;
    // 0x1f8064: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8064u;
    {
        const bool branch_taken_0x1f8064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8064u;
        // 0x1f8068: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8064) {
            ctx->pc = 0x1F807Cu;
            goto label_1f807c;
        }
    }
    ctx->pc = 0x1F806Cu;
    // 0x1f806c: 0x0  nop
    ctx->pc = 0x1f806cu;
    // NOP
label_1f8070:
    // 0x1f8070: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f8070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8074u;
    {
        const bool branch_taken_0x1f8074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8074) {
            ctx->pc = 0x1F8078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8074u;
            // 0x1f8078: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F807Cu;
            goto label_1f807c;
        }
    }
    ctx->pc = 0x1F807Cu;
label_1f807c:
    // 0x1f807c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f807cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8080: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f8080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8084: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8084u;
    {
        const bool branch_taken_0x1f8084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8084) {
            ctx->pc = 0x1F8088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8084u;
            // 0x1f8088: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F808Cu;
            goto label_1f808c;
        }
    }
    ctx->pc = 0x1F808Cu;
label_1f808c:
    // 0x1f808c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f808cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f8090: 0xc78281a4  lwc1        $f2, -0x7E5C($gp)
    ctx->pc = 0x1f8090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8094: 0x27e1018  mult        $v0, $s3, $fp
    ctx->pc = 0x1f8094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f8098: 0x0  nop
    ctx->pc = 0x1f8098u;
    // NOP
    // 0x1f809c: 0x0  nop
    ctx->pc = 0x1f809cu;
    // NOP
    // 0x1f80a0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f80a0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f80a4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1f80a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f80a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f80a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f80ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f80acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f80b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f80b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f80b8: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f80b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f80bc: 0xa462007a  sh          $v0, 0x7A($v1)
    ctx->pc = 0x1f80bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f80c0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f80c4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f80c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f80c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F80C8u;
    {
        const bool branch_taken_0x1f80c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80C8u;
        // 0x1f80cc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80c8) {
            ctx->pc = 0x1F80D8u;
            goto label_1f80d8;
        }
    }
    ctx->pc = 0x1F80D0u;
    // 0x1f80d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F80D0u;
    {
        const bool branch_taken_0x1f80d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80D0u;
        // 0x1f80d4: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80d0) {
            ctx->pc = 0x1F80E4u;
            goto label_1f80e4;
        }
    }
    ctx->pc = 0x1F80D8u;
label_1f80d8:
    // 0x1f80d8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f80d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f80dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F80DCu;
    {
        const bool branch_taken_0x1f80dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f80dc) {
            ctx->pc = 0x1F80E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80DCu;
            // 0x1f80e0: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80E4u;
            goto label_1f80e4;
        }
    }
    ctx->pc = 0x1F80E4u;
label_1f80e4:
    // 0x1f80e4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f80e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f80e8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f80e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f80ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F80ECu;
    {
        const bool branch_taken_0x1f80ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f80ec) {
            ctx->pc = 0x1F80F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80ECu;
            // 0x1f80f0: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80F4u;
            goto label_1f80f4;
        }
    }
    ctx->pc = 0x1F80F4u;
label_1f80f4:
    // 0x1f80f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f80f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f80f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f80f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f80fc: 0x276182a  slt         $v1, $s3, $s6
    ctx->pc = 0x1f80fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1f8100: 0x0  nop
    ctx->pc = 0x1f8100u;
    // NOP
    // 0x1f8104: 0x0  nop
    ctx->pc = 0x1f8104u;
    // NOP
    // 0x1f8108: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1f8108u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1f810c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f810cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f8110: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f8110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8114: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8114u;
    {
        const bool branch_taken_0x1f8114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8114u;
        // 0x1f8118: 0xa4820010  sh          $v0, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8114) {
            ctx->pc = 0x1F812Cu;
            goto label_1f812c;
        }
    }
    ctx->pc = 0x1F811Cu;
    // 0x1f811c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f811cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f8120:
    // 0x1f8120: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1f8120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1f8124: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1F8124u;
    {
        const bool branch_taken_0x1f8124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8124u;
        // 0x1f8128: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8124) {
            ctx->pc = 0x1F7F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7f58;
        }
    }
    ctx->pc = 0x1F812Cu;
label_1f812c:
    // 0x1f812c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f8130:
    // 0x1f8130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f8134: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f8134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f8138: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f813c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8140: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f8140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f8144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f814c: 0xc4a10750  lwc1        $f1, 0x750($a1)
    ctx->pc = 0x1f814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8150: 0xc4600750  lwc1        $f0, 0x750($v1)
    ctx->pc = 0x1f8150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8154: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8158: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f8158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f815c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8160: 0xc4610758  lwc1        $f1, 0x758($v1)
    ctx->pc = 0x1f8160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8164: 0xc4a00758  lwc1        $f0, 0x758($a1)
    ctx->pc = 0x1f8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8168: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f8168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f816c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f816cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f8170: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F8170u;
    SET_GPR_U32(ctx, 31, 0x1F8178u);
    ctx->pc = 0x1F8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8170u;
    // 0x1f8174: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F8170u, 0x1F8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8178u;
label_1f8178:
    // 0x1f8178: 0x1ac0001f  blez        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8178u;
    {
        const bool branch_taken_0x1f8178 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1F817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8178u;
        // 0x1f817c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8178) {
            ctx->pc = 0x1F81F8u;
            goto label_1f81f8;
        }
    }
    ctx->pc = 0x1F8180u;
label_1f8180:
    // 0x1f8180: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8184: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1f8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8188: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1f8188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f818c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1f818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8190: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f8190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f8194: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f8198: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f8198u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f819c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f819cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f81a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f81a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f81a4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1f81a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f81a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f81a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f81ac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1f81acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f81b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F81B0u;
    {
        const bool branch_taken_0x1f81b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B0u;
        // 0x1f81b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b0) {
            ctx->pc = 0x1F81C4u;
            goto label_1f81c4;
        }
    }
    ctx->pc = 0x1F81B8u;
    // 0x1f81b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F81B8u;
    {
        const bool branch_taken_0x1f81b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B8u;
        // 0x1f81bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b8) {
            ctx->pc = 0x1F81C4u;
            goto label_1f81c4;
        }
    }
    ctx->pc = 0x1F81C0u;
    // 0x1f81c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f81c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f81c4:
    // 0x1f81c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F81C4u;
    {
        const bool branch_taken_0x1f81c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81C4u;
        // 0x1f81c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81c4) {
            ctx->pc = 0x1F81ECu;
            goto label_1f81ec;
        }
    }
    ctx->pc = 0x1F81CCu;
    // 0x1f81cc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1f81ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f81d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f81d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f81d4: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x1f81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x1f81d8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1f81d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f81dc: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x1F81DCu;
    SET_GPR_U32(ctx, 31, 0x1F81E4u);
    ctx->pc = 0x1F81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81DCu;
    // 0x1f81e0: 0x46806b60  cvt.s.w     $f13, $f13 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x1F81DCu, 0x1F81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81E4u;
label_1f81e4:
    // 0x1f81e4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x1f81e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f81e8: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x1f81e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
label_1f81ec:
    // 0x1f81ec: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1f81ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1f81f0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F81F0u;
    {
        const bool branch_taken_0x1f81f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81F0u;
        // 0x1f81f4: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81f0) {
            ctx->pc = 0x1F8180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8180;
        }
    }
    ctx->pc = 0x1F81F8u;
label_1f81f8:
    // 0x1f81f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f81f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f81fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f8200: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8204: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f8204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f8208: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f8208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f820c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f820cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f8210: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f8210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8214: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f8214u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f8218: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1f8218u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f821c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f821cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f8220: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x1f8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f8224: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1f8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f8228: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1f8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f822c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f8230: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8234: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8234u;
        // 0x1f8238: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F823Cu;
    // 0x1f823c: 0x0  nop
    ctx->pc = 0x1f823cu;
    // NOP
    ctx->pc = 0x1f8240u;
}
