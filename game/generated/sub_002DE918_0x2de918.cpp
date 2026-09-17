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

// Function: sub_002DE918
// Address: 0x2de918 - 0x2de988
void sub_002DE918_0x2de918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE918_0x2de918");
#endif

    switch (ctx->pc) {
        case 0x2de93cu: goto label_2de93c;
        case 0x2de948u: goto label_2de948;
        case 0x2de954u: goto label_2de954;
        case 0x2de95cu: goto label_2de95c;
        case 0x2de968u: goto label_2de968;
        default: break;
    }

    ctx->pc = 0x2de918u;

    // 0x2de918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de928: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x2de928u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    // 0x2de92c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2de930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2de934: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2DE934u;
    SET_GPR_U32(ctx, 31, 0x2DE93Cu);
    ctx->pc = 0x2DE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE934u;
    // 0x2de938: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2DE934u, 0x2DE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE93Cu;
label_2de93c:
    // 0x2de93c: 0x263137e0  addiu       $s1, $s1, 0x37E0
    ctx->pc = 0x2de93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x2de940: 0xc0b7a24  jal         func_2DE890
    ctx->pc = 0x2DE940u;
    SET_GPR_U32(ctx, 31, 0x2DE948u);
    ctx->pc = 0x2DE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE940u;
    // 0x2de944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE890u, 0x2DE940u, 0x2DE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE948u;
label_2de948:
    // 0x2de948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de94c: 0xc0b7c80  jal         func_2DF200
    ctx->pc = 0x2DE94Cu;
    SET_GPR_U32(ctx, 31, 0x2DE954u);
    ctx->pc = 0x2DE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE94Cu;
    // 0x2de950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF200u, 0x2DE94Cu, 0x2DE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE954u;
label_2de954:
    // 0x2de954: 0xc0b7cf2  jal         func_2DF3C8
    ctx->pc = 0x2DE954u;
    SET_GPR_U32(ctx, 31, 0x2DE95Cu);
    ctx->pc = 0x2DE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE954u;
    // 0x2de958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3C8u, 0x2DE954u, 0x2DE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE95Cu;
label_2de95c:
    // 0x2de95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de960: 0xc0b798e  jal         func_2DE638
    ctx->pc = 0x2DE960u;
    SET_GPR_U32(ctx, 31, 0x2DE968u);
    ctx->pc = 0x2DE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE960u;
    // 0x2de964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE638u, 0x2DE960u, 0x2DE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE968u;
label_2de968:
    // 0x2de968: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x2de968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x2de96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de978: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2de978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de97c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE97Cu;
        // 0x2de980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE984u;
    // 0x2de984: 0x0  nop
    ctx->pc = 0x2de984u;
    // NOP
    ctx->pc = 0x2de988u;
}
