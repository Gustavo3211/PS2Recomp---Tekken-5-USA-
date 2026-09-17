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

// Function: sub_003500E8
// Address: 0x3500e8 - 0x3501e8
void sub_003500E8_0x3500e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003500E8_0x3500e8");
#endif

    switch (ctx->pc) {
        case 0x350114u: goto label_350114;
        case 0x350140u: goto label_350140;
        case 0x350178u: goto label_350178;
        default: break;
    }

    ctx->pc = 0x3500e8u;

    // 0x3500e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3500e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3500ec: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3500ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3500f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3500f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3500f4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3500f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3500f8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3500f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3500fc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3500fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350100: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x350100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x350104: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350104u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350108: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35010c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x35010Cu;
    SET_GPR_U32(ctx, 31, 0x350114u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x35010Cu, 0x350114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350114u;
label_350114:
    // 0x350114: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x350114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x350118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350118u;
    {
        const bool branch_taken_0x350118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350118) {
            ctx->pc = 0x35012Cu;
            goto label_35012c;
        }
    }
    ctx->pc = 0x350120u;
    // 0x350120: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350124: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x350124u;
    {
        const bool branch_taken_0x350124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350124) {
            ctx->pc = 0x3501D0u;
            goto label_3501d0;
        }
    }
    ctx->pc = 0x35012Cu;
label_35012c:
    // 0x35012c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350130: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x350130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x350134: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x350134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x350138: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x350138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35013c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x35013cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_350140:
    // 0x350140: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350144: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x350144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35014c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x35014cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350150: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350150u;
    {
        const bool branch_taken_0x350150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350150) {
            ctx->pc = 0x350160u;
            goto label_350160;
        }
    }
    ctx->pc = 0x350158u;
    // 0x350158: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x350158u;
    {
        const bool branch_taken_0x350158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350158) {
            ctx->pc = 0x3501CCu;
            goto label_3501cc;
        }
    }
    ctx->pc = 0x350160u;
label_350160:
    // 0x350160: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350164: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350168: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x350168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35016c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x35016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350170: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x350170u;
    SET_GPR_U32(ctx, 31, 0x350178u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x350170u, 0x350178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350178u;
label_350178:
    // 0x350178: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350178u;
    {
        const bool branch_taken_0x350178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350178) {
            ctx->pc = 0x350188u;
            goto label_350188;
        }
    }
    ctx->pc = 0x350180u;
    // 0x350180: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x350180u;
    {
        const bool branch_taken_0x350180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350180) {
            ctx->pc = 0x3501ACu;
            goto label_3501ac;
        }
    }
    ctx->pc = 0x350188u;
label_350188:
    // 0x350188: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x350188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35018c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350190: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350190u;
    {
        const bool branch_taken_0x350190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350190) {
            ctx->pc = 0x3501A0u;
            goto label_3501a0;
        }
    }
    ctx->pc = 0x350198u;
    // 0x350198: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35019c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x35019cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_3501a0:
    // 0x3501a0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3501a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3501a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3501a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3501a8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3501a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_3501ac:
    // 0x3501ac: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3501acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3501b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3501b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3501b4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3501b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3501b8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3501b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3501bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3501bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3501c0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3501c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3501c4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x3501C4u;
    {
        const bool branch_taken_0x3501c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3501c4) {
            ctx->pc = 0x350140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350140;
        }
    }
    ctx->pc = 0x3501CCu;
label_3501cc:
    // 0x3501cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3501ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3501d0:
    // 0x3501d0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3501d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501d4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3501d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3501d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3501d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3501dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3501dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3501e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3501E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3501E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3501E8u;
}
