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

// Function: sub_0022FCE0
// Address: 0x22fce0 - 0x22fd88
void sub_0022FCE0_0x22fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FCE0_0x22fce0");
#endif

    switch (ctx->pc) {
        case 0x22fd78u: goto label_22fd78;
        default: break;
    }

    ctx->pc = 0x22fce0u;

    // 0x22fce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22fce4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22fce8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22fcec: 0x244223b0  addiu       $v0, $v0, 0x23B0
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x22fcf0: 0x244c00b8  addiu       $t4, $v0, 0xB8
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x22fcf4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x22fcf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcf8: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x22fcf8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x22fcfc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x22fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x22fd00: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x22fd00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22fd08: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x22fd08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22fd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd14: 0x11620003  beq         $t3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FD14u;
    {
        const bool branch_taken_0x22fd14 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD14u;
        // 0x22fd18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd14) {
            ctx->pc = 0x22FD24u;
            goto label_22fd24;
        }
    }
    ctx->pc = 0x22FD1Cu;
    // 0x22fd1c: 0x156c0002  bne         $t3, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FD1Cu;
    {
        const bool branch_taken_0x22fd1c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        if (branch_taken_0x22fd1c) {
            ctx->pc = 0x22FD28u;
            goto label_22fd28;
        }
    }
    ctx->pc = 0x22FD24u;
label_22fd24:
    // 0x22fd24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fd28:
    // 0x22fd28: 0x15000014  bnez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22FD28u;
    {
        const bool branch_taken_0x22fd28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD28u;
        // 0x22fd2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd28) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FD30u;
    // 0x22fd30: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x22fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22fd34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22fd34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd38: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x22fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22fd3c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x22fd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fd40: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x22fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fd44: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x22fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22fd48: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x22fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22fd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22fd50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22fd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22fd54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22fd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22fd58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22fd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22fd5c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x22fd5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22fd60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x22fd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22fd64: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x22fd64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22fd68: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x22fd68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22fd6c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x22fd6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x22fd70: 0xc0984ce  jal         func_261338
    ctx->pc = 0x22FD70u;
    SET_GPR_U32(ctx, 31, 0x22FD78u);
    ctx->pc = 0x22FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD70u;
    // 0x22fd74: 0xe7a4000c  swc1        $f4, 0xC($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x261338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261338u, 0x22FD70u, 0x22FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22fd7c:
    // 0x22fd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD7Cu;
        // 0x22fd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FD84u;
    // 0x22fd84: 0x0  nop
    ctx->pc = 0x22fd84u;
    // NOP
    ctx->pc = 0x22fd88u;
}
