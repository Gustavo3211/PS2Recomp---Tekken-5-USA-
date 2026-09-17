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

// Function: sub_003501E8
// Address: 0x3501e8 - 0x3502c4
void sub_003501E8_0x3501e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003501E8_0x3501e8");
#endif

    switch (ctx->pc) {
        case 0x350214u: goto label_350214;
        case 0x350230u: goto label_350230;
        case 0x350280u: goto label_350280;
        default: break;
    }

    ctx->pc = 0x3501e8u;

    // 0x3501e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3501e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3501ec: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3501ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3501f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3501f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3501f4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3501f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501f8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3501f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3501fc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350200: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x350200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x350204: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350204u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350208: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35020c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x35020Cu;
    SET_GPR_U32(ctx, 31, 0x350214u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x35020Cu, 0x350214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350214u;
label_350214:
    // 0x350214: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x350214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x350218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350218u;
    {
        const bool branch_taken_0x350218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350218) {
            ctx->pc = 0x35022Cu;
            goto label_35022c;
        }
    }
    ctx->pc = 0x350220u;
    // 0x350220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350224: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x350224u;
    {
        const bool branch_taken_0x350224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350224) {
            ctx->pc = 0x3502ACu;
            goto label_3502ac;
        }
    }
    ctx->pc = 0x35022Cu;
label_35022c:
    // 0x35022c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x35022cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_350230:
    // 0x350230: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350234: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x350234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350238: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35023c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x35023cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350240u;
    {
        const bool branch_taken_0x350240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350240) {
            ctx->pc = 0x350250u;
            goto label_350250;
        }
    }
    ctx->pc = 0x350248u;
    // 0x350248: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x350248u;
    {
        const bool branch_taken_0x350248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350248) {
            ctx->pc = 0x3502A8u;
            goto label_3502a8;
        }
    }
    ctx->pc = 0x350250u;
label_350250:
    // 0x350250: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x350250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350254: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350258: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x350258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35025c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x35025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x350260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350264: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350268: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x350268u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35026c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350270: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x350270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350274: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x350274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350278: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x350278u;
    SET_GPR_U32(ctx, 31, 0x350280u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x350278u, 0x350280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350280u;
label_350280:
    // 0x350280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350280u;
    {
        const bool branch_taken_0x350280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350280) {
            ctx->pc = 0x350294u;
            goto label_350294;
        }
    }
    ctx->pc = 0x350288u;
    // 0x350288: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35028c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35028Cu;
    {
        const bool branch_taken_0x35028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35028c) {
            ctx->pc = 0x3502ACu;
            goto label_3502ac;
        }
    }
    ctx->pc = 0x350294u;
label_350294:
    // 0x350294: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35029c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35029cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3502a0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3502A0u;
    {
        const bool branch_taken_0x3502a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3502a0) {
            ctx->pc = 0x350230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350230;
        }
    }
    ctx->pc = 0x3502A8u;
label_3502a8:
    // 0x3502a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3502a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3502ac:
    // 0x3502ac: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3502acu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502b0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3502b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3502b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3502b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3502b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3502b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3502bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3502BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3502BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3502C4u;
}
