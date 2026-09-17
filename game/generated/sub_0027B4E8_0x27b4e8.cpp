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

// Function: sub_0027B4E8
// Address: 0x27b4e8 - 0x27b590
void sub_0027B4E8_0x27b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B4E8_0x27b4e8");
#endif

    switch (ctx->pc) {
        case 0x27b528u: goto label_27b528;
        case 0x27b540u: goto label_27b540;
        case 0x27b558u: goto label_27b558;
        default: break;
    }

    ctx->pc = 0x27b4e8u;

    // 0x27b4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b4f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27b4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b504: 0x96220306  lhu         $v0, 0x306($s1)
    ctx->pc = 0x27b504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 774)));
    // 0x27b508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B508u;
    {
        const bool branch_taken_0x27b508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B508u;
        // 0x27b50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b508) {
            ctx->pc = 0x27B518u;
            goto label_27b518;
        }
    }
    ctx->pc = 0x27B510u;
    // 0x27b510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B510u;
    {
        const bool branch_taken_0x27b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B510u;
        // 0x27b514: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b510) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B518u;
label_27b518:
    // 0x27b518: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x27b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_27b51c:
    // 0x27b51c: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x27b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x27b520: 0xc09fa6c  jal         func_27E9B0
    ctx->pc = 0x27B520u;
    SET_GPR_U32(ctx, 31, 0x27B528u);
    ctx->pc = 0x27B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B520u;
    // 0x27b524: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E9B0u, 0x27B520u, 0x27B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B528u;
label_27b528:
    // 0x27b528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b52c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27b530: 0x94620034  lhu         $v0, 0x34($v1)
    ctx->pc = 0x27b530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x27b534: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x27b534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b538: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B538u;
    SET_GPR_U32(ctx, 31, 0x27B540u);
    ctx->pc = 0x27B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B538u;
    // 0x27b53c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B538u, 0x27B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B540u;
label_27b540:
    // 0x27b540: 0x96030096  lhu         $v1, 0x96($s0)
    ctx->pc = 0x27b540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27b544: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27b544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27b548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b54c: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x27b54cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x27b550: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B550u;
    SET_GPR_U32(ctx, 31, 0x27B558u);
    ctx->pc = 0x27B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B550u;
    // 0x27b554: 0x24051f57  addiu       $a1, $zero, 0x1F57 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B550u, 0x27B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B558u;
label_27b558:
    // 0x27b558: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27b558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b55c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b560: 0x9222030d  lbu         $v0, 0x30D($s1)
    ctx->pc = 0x27b560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 781)));
    // 0x27b564: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x27b564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b568: 0xa220030d  sb          $zero, 0x30D($s1)
    ctx->pc = 0x27b568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b56c: 0xa6000306  sh          $zero, 0x306($s0)
    ctx->pc = 0x27b56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b570: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x27b570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b574: 0xa200030e  sb          $zero, 0x30E($s0)
    ctx->pc = 0x27b574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b578: 0xa200030f  sb          $zero, 0x30F($s0)
    ctx->pc = 0x27b578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b584: 0x3e00008  jr          $ra
    ctx->pc = 0x27B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B584u;
        // 0x27b588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B58Cu;
    // 0x27b58c: 0x0  nop
    ctx->pc = 0x27b58cu;
    // NOP
    ctx->pc = 0x27b590u;
}
