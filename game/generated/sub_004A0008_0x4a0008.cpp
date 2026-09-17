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

// Function: sub_004A0008
// Address: 0x4a0008 - 0x4a00a0
void sub_004A0008_0x4a0008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0008_0x4a0008");
#endif

    switch (ctx->pc) {
        case 0x4a0008u: goto label_4a0008;
        case 0x4a000cu: goto label_4a000c;
        case 0x4a0010u: goto label_4a0010;
        case 0x4a0014u: goto label_4a0014;
        case 0x4a0018u: goto label_4a0018;
        case 0x4a001cu: goto label_4a001c;
        case 0x4a0020u: goto label_4a0020;
        case 0x4a0024u: goto label_4a0024;
        case 0x4a0028u: goto label_4a0028;
        case 0x4a002cu: goto label_4a002c;
        case 0x4a0030u: goto label_4a0030;
        case 0x4a0034u: goto label_4a0034;
        case 0x4a0038u: goto label_4a0038;
        case 0x4a003cu: goto label_4a003c;
        case 0x4a0040u: goto label_4a0040;
        case 0x4a0044u: goto label_4a0044;
        case 0x4a0048u: goto label_4a0048;
        case 0x4a004cu: goto label_4a004c;
        case 0x4a0050u: goto label_4a0050;
        case 0x4a0054u: goto label_4a0054;
        case 0x4a0058u: goto label_4a0058;
        case 0x4a005cu: goto label_4a005c;
        case 0x4a0060u: goto label_4a0060;
        case 0x4a0064u: goto label_4a0064;
        case 0x4a0068u: goto label_4a0068;
        case 0x4a006cu: goto label_4a006c;
        case 0x4a0070u: goto label_4a0070;
        case 0x4a0074u: goto label_4a0074;
        case 0x4a0078u: goto label_4a0078;
        case 0x4a007cu: goto label_4a007c;
        case 0x4a0080u: goto label_4a0080;
        case 0x4a0084u: goto label_4a0084;
        case 0x4a0088u: goto label_4a0088;
        case 0x4a008cu: goto label_4a008c;
        case 0x4a0090u: goto label_4a0090;
        case 0x4a0094u: goto label_4a0094;
        case 0x4a0098u: goto label_4a0098;
        case 0x4a009cu: goto label_4a009c;
        default: break;
    }

    ctx->pc = 0x4a0008u;

label_4a0008:
    // 0x4a0008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a0008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a000c:
    // 0x4a000c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0010:
    // 0x4a0010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4a0014:
    // 0x4a0014: 0x24470140  addiu       $a3, $v0, 0x140
    ctx->pc = 0x4a0014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_4a0018:
    // 0x4a0018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a0018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4a001c:
    // 0x4a001c: 0x2446014a  addiu       $a2, $v0, 0x14A
    ctx->pc = 0x4a001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
label_4a0020:
    // 0x4a0020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a0020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a0024:
    // 0x4a0024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a0024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a0028:
    // 0x4a0028: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x4a0028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a002c:
    // 0x4a002c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a002cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0030:
    // 0x4a0030: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_4a0034:
    if (ctx->pc == 0x4A0034u) {
        ctx->pc = 0x4A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0030u;
        // 0x4a0034: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0038u;
        goto label_4a0038;
    }
    ctx->pc = 0x4A0030u;
    {
        const bool branch_taken_0x4a0030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0030u;
        // 0x4a0034: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0030) {
            ctx->pc = 0x4A0048u;
            goto label_4a0048;
        }
    }
    ctx->pc = 0x4A0038u;
label_4a0038:
    // 0x4a0038: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a0038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4a003c:
    // 0x4a003c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a0040:
    // 0x4a0040: 0x10000012  b           . + 4 + (0x12 << 2)
label_4a0044:
    if (ctx->pc == 0x4A0044u) {
        ctx->pc = 0x4A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0040u;
        // 0x4a0044: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0048u;
        goto label_4a0048;
    }
    ctx->pc = 0x4A0040u;
    {
        const bool branch_taken_0x4a0040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0040u;
        // 0x4a0044: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0040) {
            ctx->pc = 0x4A008Cu;
            goto label_4a008c;
        }
    }
    ctx->pc = 0x4A0048u;
label_4a0048:
    // 0x4a0048: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a0048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a004c:
    // 0x4a004c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4a004cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4a0050:
    // 0x4a0050: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4a0054:
    if (ctx->pc == 0x4A0054u) {
        ctx->pc = 0x4A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0050u;
        // 0x4a0054: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0058u;
        goto label_4a0058;
    }
    ctx->pc = 0x4A0050u;
    {
        const bool branch_taken_0x4a0050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0050) {
            ctx->pc = 0x4A0054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0050u;
            // 0x4a0054: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0084u;
            goto label_4a0084;
        }
    }
    ctx->pc = 0x4A0058u;
label_4a0058:
    // 0x4a0058: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x4a0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a005c:
    // 0x4a005c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a005cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4a0060:
    // 0x4a0060: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a0060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4a0064:
    // 0x4a0064: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_4a0068:
    if (ctx->pc == 0x4A0068u) {
        ctx->pc = 0x4A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0064u;
        // 0x4a0068: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A006Cu;
        goto label_4a006c;
    }
    ctx->pc = 0x4A0064u;
    {
        const bool branch_taken_0x4a0064 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a0064) {
            ctx->pc = 0x4A0068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0064u;
            // 0x4a0068: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0078u;
            goto label_4a0078;
        }
    }
    ctx->pc = 0x4A006Cu;
label_4a006c:
    // 0x4a006c: 0xc123392  jal         func_48CE48
label_4a0070:
    if (ctx->pc == 0x4A0070u) {
        ctx->pc = 0x4A0074u;
        goto label_4a0074;
    }
    ctx->pc = 0x4A006Cu;
    SET_GPR_U32(ctx, 31, 0x4A0074u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A006Cu, 0x4A0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0074u;
label_4a0074:
    // 0x4a0074: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a0078:
    // 0x4a0078: 0x40f809  jalr        $v0
label_4a007c:
    if (ctx->pc == 0x4A007Cu) {
        ctx->pc = 0x4A0080u;
        goto label_4a0080;
    }
    ctx->pc = 0x4A0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0080u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0078u, 0x4A0080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0080u;
label_4a0080:
    // 0x4a0080: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a0080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0084:
    // 0x4a0084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a0088:
    // 0x4a0088: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4a0088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a008c:
    // 0x4a008c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a008cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0090:
    // 0x4a0090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a0090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a0094:
    // 0x4a0094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a0094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0098:
    // 0x4a0098: 0x3e00008  jr          $ra
label_4a009c:
    if (ctx->pc == 0x4A009Cu) {
        ctx->pc = 0x4A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0098u;
        // 0x4a009c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A00A0u;
        goto label_fallthrough_0x4a0098;
    }
    ctx->pc = 0x4A0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0098u;
        // 0x4a009c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0098:
    ctx->pc = 0x4A00A0u;
}
