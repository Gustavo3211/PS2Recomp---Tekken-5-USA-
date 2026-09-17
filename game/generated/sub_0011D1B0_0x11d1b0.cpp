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

// Function: sub_0011D1B0
// Address: 0x11d1b0 - 0x11d288
void sub_0011D1B0_0x11d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D1B0_0x11d1b0");
#endif

    switch (ctx->pc) {
        case 0x11d1f0u: goto label_11d1f0;
        case 0x11d200u: goto label_11d200;
        case 0x11d240u: goto label_11d240;
        case 0x11d258u: goto label_11d258;
        case 0x11d268u: goto label_11d268;
        case 0x11d278u: goto label_11d278;
        default: break;
    }

    ctx->pc = 0x11d1b0u;

    // 0x11d1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d1b4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11d1b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11d1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d1bc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x11d1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11d1c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11d1c4: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x11d1c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d1cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d1d0: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x11d1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x11d1d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11d1d8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11d1d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d1dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D1DCu;
    {
        const bool branch_taken_0x11d1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d1dc) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D1E4u;
    // 0x11d1e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d1e8: 0xc047c00  jal         func_11F000
    ctx->pc = 0x11D1E8u;
    SET_GPR_U32(ctx, 31, 0x11D1F0u);
    ctx->pc = 0x11F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F000u, 0x11D1E8u, 0x11D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11D1F0u;
    {
        const bool branch_taken_0x11d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1F0u;
        // 0x11d1f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f0) {
            ctx->pc = 0x11D27Cu;
            goto label_11d27c;
        }
    }
    ctx->pc = 0x11D1F8u;
label_11d1f8:
    // 0x11d1f8: 0xc047ae0  jal         func_11EB80
    ctx->pc = 0x11D1F8u;
    SET_GPR_U32(ctx, 31, 0x11D200u);
    ctx->pc = 0x11D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1F8u;
    // 0x11d1fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB80u, 0x11D1F8u, 0x11D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D200u;
label_11d200:
    // 0x11d200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d204: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x11d204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11d208: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11D208u;
    {
        const bool branch_taken_0x11d208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D208u;
        // 0x11d20c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d208) {
            ctx->pc = 0x11D248u;
            goto label_11d248;
        }
    }
    ctx->pc = 0x11D210u;
    // 0x11d210: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D210u;
    {
        const bool branch_taken_0x11d210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d210) {
            ctx->pc = 0x11D214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D210u;
            // 0x11d214: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D228u;
            goto label_11d228;
        }
    }
    ctx->pc = 0x11D218u;
    // 0x11d218: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D218u;
    {
        const bool branch_taken_0x11d218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D218u;
        // 0x11d21c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d218) {
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11D220u;
    // 0x11d220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11D220u;
    {
        const bool branch_taken_0x11d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D220u;
        // 0x11d224: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d220) {
            ctx->pc = 0x11D270u;
            goto label_11d270;
        }
    }
    ctx->pc = 0x11D228u;
label_11d228:
    // 0x11d228: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D228u;
    {
        const bool branch_taken_0x11d228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D228u;
        // 0x11d22c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d228) {
            ctx->pc = 0x11D260u;
            goto label_11d260;
        }
    }
    ctx->pc = 0x11D230u;
    // 0x11d230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11D230u;
    {
        const bool branch_taken_0x11d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D230u;
        // 0x11d234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d230) {
            ctx->pc = 0x11D270u;
            goto label_11d270;
        }
    }
    ctx->pc = 0x11D238u;
label_11d238:
    // 0x11d238: 0xc047c00  jal         func_11F000
    ctx->pc = 0x11D238u;
    SET_GPR_U32(ctx, 31, 0x11D240u);
    ctx->pc = 0x11D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D238u;
    // 0x11d23c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F000u, 0x11D238u, 0x11D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D240u;
label_11d240:
    // 0x11d240: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11D240u;
    {
        const bool branch_taken_0x11d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D240u;
        // 0x11d244: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d240) {
            ctx->pc = 0x11D27Cu;
            goto label_11d27c;
        }
    }
    ctx->pc = 0x11D248u;
label_11d248:
    // 0x11d248: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11d248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d24c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d250: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11D250u;
    SET_GPR_U32(ctx, 31, 0x11D258u);
    ctx->pc = 0x11D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D250u;
    // 0x11d254: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B8u, 0x11D250u, 0x11D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D258u;
label_11d258:
    // 0x11d258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D258u;
    {
        const bool branch_taken_0x11d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D258u;
        // 0x11d25c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d258) {
            ctx->pc = 0x11D278u;
            goto label_11d278;
        }
    }
    ctx->pc = 0x11D260u;
label_11d260:
    // 0x11d260: 0xc047c00  jal         func_11F000
    ctx->pc = 0x11D260u;
    SET_GPR_U32(ctx, 31, 0x11D268u);
    ctx->pc = 0x11D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D260u;
    // 0x11d264: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F000u, 0x11D260u, 0x11D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D268u;
label_11d268:
    // 0x11d268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D268u;
    {
        const bool branch_taken_0x11d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D268u;
        // 0x11d26c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d268) {
            ctx->pc = 0x11D278u;
            goto label_11d278;
        }
    }
    ctx->pc = 0x11D270u;
label_11d270:
    // 0x11d270: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11D270u;
    SET_GPR_U32(ctx, 31, 0x11D278u);
    ctx->pc = 0x11D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D270u;
    // 0x11d274: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B8u, 0x11D270u, 0x11D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D278u;
label_11d278:
    // 0x11d278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11d27c:
    // 0x11d27c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D27Cu;
        // 0x11d280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D284u;
    // 0x11d284: 0x0  nop
    ctx->pc = 0x11d284u;
    // NOP
    ctx->pc = 0x11d288u;
}
