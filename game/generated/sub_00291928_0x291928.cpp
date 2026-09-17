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

// Function: sub_00291928
// Address: 0x291928 - 0x291978
void sub_00291928_0x291928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291928_0x291928");
#endif

    switch (ctx->pc) {
        case 0x29193cu: goto label_29193c;
        case 0x291968u: goto label_291968;
        default: break;
    }

    ctx->pc = 0x291928u;

    // 0x291928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29192c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x291930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x291934: 0xc086620  jal         func_219880
    ctx->pc = 0x291934u;
    SET_GPR_U32(ctx, 31, 0x29193Cu);
    ctx->pc = 0x291938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291934u;
    // 0x291938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x291934u, 0x29193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29193Cu;
label_29193c:
    // 0x29193c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29193cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291940: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x291944: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291944u;
    {
        const bool branch_taken_0x291944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291944u;
        // 0x291948: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291944) {
            ctx->pc = 0x291968u;
            goto label_291968;
        }
    }
    ctx->pc = 0x29194Cu;
    // 0x29194c: 0x8c6400a4  lw          $a0, 0xA4($v1)
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x291950: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x291950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x291954: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x291954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x291958: 0x24217118  addiu       $at, $at, 0x7118
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28952));
    // 0x29195c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x29195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x291960: 0xc0a455e  jal         func_291578
    ctx->pc = 0x291960u;
    SET_GPR_U32(ctx, 31, 0x291968u);
    ctx->pc = 0x291964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291960u;
    // 0x291964: 0xc60c0158  lwc1        $f12, 0x158($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291578u, 0x291960u, 0x291968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291968u;
label_291968:
    // 0x291968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29196c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291970: 0x3e00008  jr          $ra
    ctx->pc = 0x291970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291970u;
        // 0x291974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291978u;
}
