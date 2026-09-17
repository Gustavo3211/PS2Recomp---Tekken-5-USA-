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

// Function: sub_0048B4E0
// Address: 0x48b4e0 - 0x48b5b8
void sub_0048B4E0_0x48b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B4E0_0x48b4e0");
#endif

    switch (ctx->pc) {
        case 0x48b4f0u: goto label_48b4f0;
        case 0x48b500u: goto label_48b500;
        case 0x48b514u: goto label_48b514;
        case 0x48b520u: goto label_48b520;
        case 0x48b528u: goto label_48b528;
        case 0x48b530u: goto label_48b530;
        case 0x48b544u: goto label_48b544;
        case 0x48b54cu: goto label_48b54c;
        case 0x48b554u: goto label_48b554;
        case 0x48b568u: goto label_48b568;
        case 0x48b570u: goto label_48b570;
        case 0x48b578u: goto label_48b578;
        case 0x48b598u: goto label_48b598;
        default: break;
    }

    ctx->pc = 0x48b4e0u;

    // 0x48b4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b4e4: 0x8122d60  j           func_48B580
    ctx->pc = 0x48B4E4u;
    ctx->pc = 0x48B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B4E4u;
    // 0x48b4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B580u;
    goto label_48b580;
    ctx->pc = 0x48B4ECu;
    // 0x48b4ec: 0x0  nop
    ctx->pc = 0x48b4ecu;
    // NOP
label_48b4f0:
    // 0x48b4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x48B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B4F4u;
        // 0x48b4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B4FCu;
    // 0x48b4fc: 0x0  nop
    ctx->pc = 0x48b4fcu;
    // NOP
label_48b500:
    // 0x48b500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48b508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48b50c: 0xc13e3d4  jal         func_4F8F50
    ctx->pc = 0x48B50Cu;
    SET_GPR_U32(ctx, 31, 0x48B514u);
    ctx->pc = 0x48B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B50Cu;
    // 0x48b510: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8F50u, 0x48B50Cu, 0x48B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B514u;
label_48b514:
    // 0x48b514: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48b514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48b518: 0xc13e3dc  jal         func_4F8F70
    ctx->pc = 0x48B518u;
    SET_GPR_U32(ctx, 31, 0x48B520u);
    ctx->pc = 0x48B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B518u;
    // 0x48b51c: 0xae022304  sw          $v0, 0x2304($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8F70u, 0x48B518u, 0x48B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B520u;
label_48b520:
    // 0x48b520: 0xc13e3e0  jal         func_4F8F80
    ctx->pc = 0x48B520u;
    SET_GPR_U32(ctx, 31, 0x48B528u);
    ctx->pc = 0x48B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B520u;
    // 0x48b524: 0xae02230c  sw          $v0, 0x230C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8972), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8F80u, 0x48B520u, 0x48B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B528u;
label_48b528:
    // 0x48b528: 0xc13e3d8  jal         func_4F8F60
    ctx->pc = 0x48B528u;
    SET_GPR_U32(ctx, 31, 0x48B530u);
    ctx->pc = 0x48B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B528u;
    // 0x48b52c: 0xae022310  sw          $v0, 0x2310($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8F60u, 0x48B528u, 0x48B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B530u;
label_48b530:
    // 0x48b530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b534: 0xa603232a  sh          $v1, 0x232A($s0)
    ctx->pc = 0x48b534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9002), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b538: 0xae022308  sw          $v0, 0x2308($s0)
    ctx->pc = 0x48b538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8968), GPR_U32(ctx, 2));
    // 0x48b53c: 0xc13e3e4  jal         func_4F8F90
    ctx->pc = 0x48B53Cu;
    SET_GPR_U32(ctx, 31, 0x48B544u);
    ctx->pc = 0x48B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B53Cu;
    // 0x48b540: 0xa6002318  sh          $zero, 0x2318($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8984), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8F90u, 0x48B53Cu, 0x48B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B544u;
label_48b544:
    // 0x48b544: 0xc13e3e8  jal         func_4F8FA0
    ctx->pc = 0x48B544u;
    SET_GPR_U32(ctx, 31, 0x48B54Cu);
    ctx->pc = 0x48B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B544u;
    // 0x48b548: 0xae022280  sw          $v0, 0x2280($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8832), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FA0u, 0x48B544u, 0x48B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B54Cu;
label_48b54c:
    // 0x48b54c: 0xc123f9c  jal         func_48FE70
    ctx->pc = 0x48B54Cu;
    SET_GPR_U32(ctx, 31, 0x48B554u);
    ctx->pc = 0x48B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B54Cu;
    // 0x48b550: 0xae0222a4  sw          $v0, 0x22A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE70u, 0x48B54Cu, 0x48B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B554u;
label_48b554:
    // 0x48b554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b55c: 0x8122d62  j           func_48B588
    ctx->pc = 0x48B55Cu;
    ctx->pc = 0x48B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B55Cu;
    // 0x48b560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B588u;
    goto label_48b588;
    ctx->pc = 0x48B564u;
    // 0x48b564: 0x0  nop
    ctx->pc = 0x48b564u;
    // NOP
label_48b568:
    // 0x48b568: 0x3e00008  jr          $ra
    ctx->pc = 0x48B568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B570u;
label_48b570:
    // 0x48b570: 0x3e00008  jr          $ra
    ctx->pc = 0x48B570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B578u;
label_48b578:
    // 0x48b578: 0x3e00008  jr          $ra
    ctx->pc = 0x48B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B580u;
label_48b580:
    // 0x48b580: 0x3e00008  jr          $ra
    ctx->pc = 0x48B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B588u;
label_48b588:
    // 0x48b588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b58c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b590: 0xc12bd7a  jal         func_4AF5E8
    ctx->pc = 0x48B590u;
    SET_GPR_U32(ctx, 31, 0x48B598u);
    ctx->pc = 0x48B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B590u;
    // 0x48b594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF5E8u, 0x48B590u, 0x48B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B598u;
label_48b598:
    // 0x48b598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b59c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48b5a0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48b5a4: 0xa4402290  sh          $zero, 0x2290($v0)
    ctx->pc = 0x48b5a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F910u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F910u, _value); } while (0);
    // 0x48b5a8: 0xa4400098  sh          $zero, 0x98($v0)
    ctx->pc = 0x48b5a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D718u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D718u, _value); } while (0);
    // 0x48b5ac: 0x8127fd4  j           func_49FF50
    ctx->pc = 0x48B5ACu;
    ctx->pc = 0x48B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B5ACu;
    // 0x48b5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FF50u, 0x48B5ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48B5B4u;
    // 0x48b5b4: 0x0  nop
    ctx->pc = 0x48b5b4u;
    // NOP
    ctx->pc = 0x48b5b8u;
}
