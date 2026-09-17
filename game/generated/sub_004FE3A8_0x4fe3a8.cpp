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

// Function: sub_004FE3A8
// Address: 0x4fe3a8 - 0x4fe480
void sub_004FE3A8_0x4fe3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FE3A8_0x4fe3a8");
#endif

    switch (ctx->pc) {
        case 0x4fe45cu: goto label_4fe45c;
        case 0x4fe460u: goto label_4fe460;
        default: break;
    }

    ctx->pc = 0x4fe3a8u;

    // 0x4fe3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fe3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fe3ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4fe3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4fe3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4fe3b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4fe3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe3b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4fe3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fe3bc: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x4fe3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x4fe3c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4fe3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fe3c4: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x4fe3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x4fe3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4fe3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe3cc: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x4fe3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x4fe3d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4fe3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fe3d4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fe3d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fe3d8: 0xacc3a674  sw          $v1, -0x598C($a2)
    ctx->pc = 0x4fe3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944372), GPR_U32(ctx, 3));
    // 0x4fe3dc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4fe3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4fe3e0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x4fe3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4fe3e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4fe3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4fe3e8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4fe3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4fe3ec: 0xad02a678  sw          $v0, -0x5988($t0)
    ctx->pc = 0x4fe3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294944376), GPR_U32(ctx, 2));
    // 0x4fe3f0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x4fe3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4fe3f4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4fe3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4fe3f8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4fe3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fe3fc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fe3fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fe400: 0xad23a67c  sw          $v1, -0x5984($t1)
    ctx->pc = 0x4fe400u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944380), GPR_U32(ctx, 3));
    // 0x4fe404: 0x813f8c8  j           func_4FE320
    ctx->pc = 0x4FE404u;
    ctx->pc = 0x4FE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE404u;
    // 0x4fe408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE320u;
    sub_004FE320_0x4fe320(rdram, ctx, runtime); return;
    ctx->pc = 0x4FE40Cu;
    // 0x4fe40c: 0x0  nop
    ctx->pc = 0x4fe40cu;
    // NOP
    // 0x4fe410: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x4fe410u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x4fe414: 0x24070fa0  addiu       $a3, $zero, 0xFA0
    ctx->pc = 0x4fe414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x4fe418: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x4fe418u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x4fe41c: 0x24040320  addiu       $a0, $zero, 0x320
    ctx->pc = 0x4fe41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x4fe420: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x4fe420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x4fe424: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x4fe424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x4fe428: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x4fe428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x4fe42c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fe430: 0xad27a660  sw          $a3, -0x59A0($t1)
    ctx->pc = 0x4fe430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8EA660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA660u, _value); } while (0);
    // 0x4fe434: 0xad04a664  sw          $a0, -0x599C($t0)
    ctx->pc = 0x4fe434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EA664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA664u, _value); } while (0);
    // 0x4fe438: 0xaca3a668  sw          $v1, -0x5998($a1)
    ctx->pc = 0x4fe438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EA668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA668u, _value); } while (0);
    // 0x4fe43c: 0xac40a670  sw          $zero, -0x5990($v0)
    ctx->pc = 0x4fe43cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EA670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA670u, _value); } while (0);
    // 0x4fe440: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE440u;
        // 0x4fe444: 0xacc0a66c  sw          $zero, -0x5994($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294944364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE448u;
    // 0x4fe448: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4fe448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4fe44c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fe44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fe450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4fe450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4fe454: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FE454u;
    SET_GPR_U32(ctx, 31, 0x4FE45Cu);
    ctx->pc = 0x4FE458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE454u;
    // 0x4fe458: 0x2484c578  addiu       $a0, $a0, -0x3A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FE454u, 0x4FE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE45Cu;
label_4fe45c:
    // 0x4fe45c: 0x0  nop
    ctx->pc = 0x4fe45cu;
    // NOP
label_4fe460:
    // 0x4fe460: 0x0  nop
    ctx->pc = 0x4fe460u;
    // NOP
    // 0x4fe464: 0x0  nop
    ctx->pc = 0x4fe464u;
    // NOP
    // 0x4fe468: 0x0  nop
    ctx->pc = 0x4fe468u;
    // NOP
    // 0x4fe46c: 0x0  nop
    ctx->pc = 0x4fe46cu;
    // NOP
    // 0x4fe470: 0x0  nop
    ctx->pc = 0x4fe470u;
    // NOP
    // 0x4fe474: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FE474u;
    {
        const bool branch_taken_0x4fe474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fe474) {
            ctx->pc = 0x4FE460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fe460;
        }
    }
    ctx->pc = 0x4FE47Cu;
    // 0x4fe47c: 0x0  nop
    ctx->pc = 0x4fe47cu;
    // NOP
    ctx->pc = 0x4fe480u;
}
