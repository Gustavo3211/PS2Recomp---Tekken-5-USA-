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

// Function: sub_00341240
// Address: 0x341240 - 0x3412a0
void sub_00341240_0x341240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341240_0x341240");
#endif

    switch (ctx->pc) {
        case 0x341274u: goto label_341274;
        default: break;
    }

    ctx->pc = 0x341240u;

    // 0x341240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341244: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x341244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34124c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34124cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x341250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x341254: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x341254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341258: 0x90e3001c  lbu         $v1, 0x1C($a3)
    ctx->pc = 0x341258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x34125c: 0x1466000b  bne         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x34125Cu;
    {
        const bool branch_taken_0x34125c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x341260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34125Cu;
        // 0x341260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34125c) {
            ctx->pc = 0x34128Cu;
            goto label_34128c;
        }
    }
    ctx->pc = 0x341264u;
    // 0x341264: 0x8cf00018  lw          $s0, 0x18($a3)
    ctx->pc = 0x341264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x341268: 0x1108021  addu        $s0, $t0, $s0
    ctx->pc = 0x341268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x34126c: 0xc0d047c  jal         func_3411F0
    ctx->pc = 0x34126Cu;
    SET_GPR_U32(ctx, 31, 0x341274u);
    ctx->pc = 0x341270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34126Cu;
    // 0x341270: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3411F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3411F0u, 0x34126Cu, 0x341274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341274u;
label_341274:
    // 0x341274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x341278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34127c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34127cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x341280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341284: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x341284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x341288: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x341288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_34128c:
    // 0x34128c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34128cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341294: 0x3e00008  jr          $ra
    ctx->pc = 0x341294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341294u;
        // 0x341298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34129Cu;
    // 0x34129c: 0x0  nop
    ctx->pc = 0x34129cu;
    // NOP
    ctx->pc = 0x3412a0u;
}
