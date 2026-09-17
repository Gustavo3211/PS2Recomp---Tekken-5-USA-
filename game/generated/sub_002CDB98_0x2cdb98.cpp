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

// Function: sub_002CDB98
// Address: 0x2cdb98 - 0x2cdea8
void sub_002CDB98_0x2cdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDB98_0x2cdb98");
#endif

    switch (ctx->pc) {
        case 0x2cdbe4u: goto label_2cdbe4;
        case 0x2cdc24u: goto label_2cdc24;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdca4u: goto label_2cdca4;
        case 0x2cdce4u: goto label_2cdce4;
        case 0x2cdd24u: goto label_2cdd24;
        case 0x2cdd64u: goto label_2cdd64;
        case 0x2cdda4u: goto label_2cdda4;
        case 0x2cdde4u: goto label_2cdde4;
        case 0x2cde24u: goto label_2cde24;
        case 0x2cde64u: goto label_2cde64;
        default: break;
    }

    ctx->pc = 0x2cdb98u;

    // 0x2cdb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cdb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cdb9c: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x2cdb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2cdba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cdba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cdba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cdba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cdba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cdba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cdbac: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2cdbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cdbb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDBB0u;
    {
        const bool branch_taken_0x2cdbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBB0u;
        // 0x2cdbb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbb0) {
            ctx->pc = 0x2CDBC8u;
            goto label_2cdbc8;
        }
    }
    ctx->pc = 0x2CDBB8u;
    // 0x2cdbb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cdbbc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2cdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cdbc0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDBC0u;
    {
        const bool branch_taken_0x2cdbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBC0u;
        // 0x2cdbc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbc0) {
            ctx->pc = 0x2CDBD4u;
            goto label_2cdbd4;
        }
    }
    ctx->pc = 0x2CDBC8u;
label_2cdbc8:
    // 0x2cdbc8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2cdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2cdbcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cdbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbd0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2cdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2cdbd4:
    // 0x2cdbd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cdbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbdc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDBDCu;
    SET_GPR_U32(ctx, 31, 0x2CDBE4u);
    ctx->pc = 0x2CDBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBDCu;
    // 0x2cdbe0: 0x24a5e8a8  addiu       $a1, $a1, -0x1758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDBDCu, 0x2CDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBE4u;
label_2cdbe4:
    // 0x2cdbe4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDBE4u;
    {
        const bool branch_taken_0x2cdbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdbe4) {
            ctx->pc = 0x2CDBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDBE4u;
            // 0x2cdbe8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC18u;
            goto label_2cdc18;
        }
    }
    ctx->pc = 0x2CDBECu;
    // 0x2cdbec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdbf0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDBF0u;
    {
        const bool branch_taken_0x2cdbf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdbf0) {
            ctx->pc = 0x2CDBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDBF0u;
            // 0x2cdbf4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC18u;
            goto label_2cdc18;
        }
    }
    ctx->pc = 0x2CDBF8u;
    // 0x2cdbf8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDBF8u;
    {
        const bool branch_taken_0x2cdbf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBF8u;
        // 0x2cdbfc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbf8) {
            ctx->pc = 0x2CDC08u;
            goto label_2cdc08;
        }
    }
    ctx->pc = 0x2CDC00u;
    // 0x2cdc00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC00u;
    {
        const bool branch_taken_0x2cdc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC00u;
        // 0x2cdc04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc00) {
            ctx->pc = 0x2CDC10u;
            goto label_2cdc10;
        }
    }
    ctx->pc = 0x2CDC08u;
label_2cdc08:
    // 0x2cdc08: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdc0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdc10:
    // 0x2cdc10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdc14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdc18:
    // 0x2cdc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDC1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC24u);
    ctx->pc = 0x2CDC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC1Cu;
    // 0x2cdc20: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDC1Cu, 0x2CDC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC24u;
label_2cdc24:
    // 0x2cdc24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDC24u;
    {
        const bool branch_taken_0x2cdc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc24) {
            ctx->pc = 0x2CDC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC24u;
            // 0x2cdc28: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC58u;
            goto label_2cdc58;
        }
    }
    ctx->pc = 0x2CDC2Cu;
    // 0x2cdc2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdc30: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDC30u;
    {
        const bool branch_taken_0x2cdc30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc30) {
            ctx->pc = 0x2CDC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC30u;
            // 0x2cdc34: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC58u;
            goto label_2cdc58;
        }
    }
    ctx->pc = 0x2CDC38u;
    // 0x2cdc38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC38u;
    {
        const bool branch_taken_0x2cdc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC38u;
        // 0x2cdc3c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc38) {
            ctx->pc = 0x2CDC48u;
            goto label_2cdc48;
        }
    }
    ctx->pc = 0x2CDC40u;
    // 0x2cdc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC40u;
    {
        const bool branch_taken_0x2cdc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC40u;
        // 0x2cdc44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc40) {
            ctx->pc = 0x2CDC50u;
            goto label_2cdc50;
        }
    }
    ctx->pc = 0x2CDC48u;
label_2cdc48:
    // 0x2cdc48: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdc4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdc50:
    // 0x2cdc50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdc54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdc58:
    // 0x2cdc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDC5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC64u);
    ctx->pc = 0x2CDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC5Cu;
    // 0x2cdc60: 0x24a5e7a0  addiu       $a1, $a1, -0x1860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDC5Cu, 0x2CDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC64u;
label_2cdc64:
    // 0x2cdc64: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDC64u;
    {
        const bool branch_taken_0x2cdc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc64) {
            ctx->pc = 0x2CDC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC64u;
            // 0x2cdc68: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC98u;
            goto label_2cdc98;
        }
    }
    ctx->pc = 0x2CDC6Cu;
    // 0x2cdc6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdc70: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDC70u;
    {
        const bool branch_taken_0x2cdc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc70) {
            ctx->pc = 0x2CDC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC70u;
            // 0x2cdc74: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC98u;
            goto label_2cdc98;
        }
    }
    ctx->pc = 0x2CDC78u;
    // 0x2cdc78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC78u;
    {
        const bool branch_taken_0x2cdc78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC78u;
        // 0x2cdc7c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc78) {
            ctx->pc = 0x2CDC88u;
            goto label_2cdc88;
        }
    }
    ctx->pc = 0x2CDC80u;
    // 0x2cdc80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC80u;
    {
        const bool branch_taken_0x2cdc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC80u;
        // 0x2cdc84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc80) {
            ctx->pc = 0x2CDC90u;
            goto label_2cdc90;
        }
    }
    ctx->pc = 0x2CDC88u;
label_2cdc88:
    // 0x2cdc88: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdc8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdc90:
    // 0x2cdc90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdc94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdc98:
    // 0x2cdc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc9c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2CDCA4u);
    ctx->pc = 0x2CDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC9Cu;
    // 0x2cdca0: 0x24a5e7b8  addiu       $a1, $a1, -0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDC9Cu, 0x2CDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA4u;
label_2cdca4:
    // 0x2cdca4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDCA4u;
    {
        const bool branch_taken_0x2cdca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdca4) {
            ctx->pc = 0x2CDCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCA4u;
            // 0x2cdca8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCD8u;
            goto label_2cdcd8;
        }
    }
    ctx->pc = 0x2CDCACu;
    // 0x2cdcac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdcb0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDCB0u;
    {
        const bool branch_taken_0x2cdcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcb0) {
            ctx->pc = 0x2CDCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCB0u;
            // 0x2cdcb4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCD8u;
            goto label_2cdcd8;
        }
    }
    ctx->pc = 0x2CDCB8u;
    // 0x2cdcb8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDCB8u;
    {
        const bool branch_taken_0x2cdcb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB8u;
        // 0x2cdcbc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcb8) {
            ctx->pc = 0x2CDCC8u;
            goto label_2cdcc8;
        }
    }
    ctx->pc = 0x2CDCC0u;
    // 0x2cdcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDCC0u;
    {
        const bool branch_taken_0x2cdcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCC0u;
        // 0x2cdcc4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcc0) {
            ctx->pc = 0x2CDCD0u;
            goto label_2cdcd0;
        }
    }
    ctx->pc = 0x2CDCC8u;
label_2cdcc8:
    // 0x2cdcc8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdccc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdcd0:
    // 0x2cdcd0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdcd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdcd8:
    // 0x2cdcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcdc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDCDCu;
    SET_GPR_U32(ctx, 31, 0x2CDCE4u);
    ctx->pc = 0x2CDCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCDCu;
    // 0x2cdce0: 0x24a5e7d0  addiu       $a1, $a1, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDCDCu, 0x2CDCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCE4u;
label_2cdce4:
    // 0x2cdce4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDCE4u;
    {
        const bool branch_taken_0x2cdce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdce4) {
            ctx->pc = 0x2CDCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCE4u;
            // 0x2cdce8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD18u;
            goto label_2cdd18;
        }
    }
    ctx->pc = 0x2CDCECu;
    // 0x2cdcec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdcf0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDCF0u;
    {
        const bool branch_taken_0x2cdcf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcf0) {
            ctx->pc = 0x2CDCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCF0u;
            // 0x2cdcf4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD18u;
            goto label_2cdd18;
        }
    }
    ctx->pc = 0x2CDCF8u;
    // 0x2cdcf8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDCF8u;
    {
        const bool branch_taken_0x2cdcf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCF8u;
        // 0x2cdcfc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcf8) {
            ctx->pc = 0x2CDD08u;
            goto label_2cdd08;
        }
    }
    ctx->pc = 0x2CDD00u;
    // 0x2cdd00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD00u;
    {
        const bool branch_taken_0x2cdd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD00u;
        // 0x2cdd04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd00) {
            ctx->pc = 0x2CDD10u;
            goto label_2cdd10;
        }
    }
    ctx->pc = 0x2CDD08u;
label_2cdd08:
    // 0x2cdd08: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdd0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdd10:
    // 0x2cdd10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdd14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdd18:
    // 0x2cdd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD24u);
    ctx->pc = 0x2CDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD1Cu;
    // 0x2cdd20: 0x24a5e7e8  addiu       $a1, $a1, -0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDD1Cu, 0x2CDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD24u;
label_2cdd24:
    // 0x2cdd24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDD24u;
    {
        const bool branch_taken_0x2cdd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd24) {
            ctx->pc = 0x2CDD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD24u;
            // 0x2cdd28: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD58u;
            goto label_2cdd58;
        }
    }
    ctx->pc = 0x2CDD2Cu;
    // 0x2cdd2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdd30: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDD30u;
    {
        const bool branch_taken_0x2cdd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd30) {
            ctx->pc = 0x2CDD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD30u;
            // 0x2cdd34: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD58u;
            goto label_2cdd58;
        }
    }
    ctx->pc = 0x2CDD38u;
    // 0x2cdd38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD38u;
    {
        const bool branch_taken_0x2cdd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD38u;
        // 0x2cdd3c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd38) {
            ctx->pc = 0x2CDD48u;
            goto label_2cdd48;
        }
    }
    ctx->pc = 0x2CDD40u;
    // 0x2cdd40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD40u;
    {
        const bool branch_taken_0x2cdd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD40u;
        // 0x2cdd44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd40) {
            ctx->pc = 0x2CDD50u;
            goto label_2cdd50;
        }
    }
    ctx->pc = 0x2CDD48u;
label_2cdd48:
    // 0x2cdd48: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdd4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdd50:
    // 0x2cdd50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdd54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdd58:
    // 0x2cdd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD64u);
    ctx->pc = 0x2CDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD5Cu;
    // 0x2cdd60: 0x24a5e800  addiu       $a1, $a1, -0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDD5Cu, 0x2CDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD64u;
label_2cdd64:
    // 0x2cdd64: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDD64u;
    {
        const bool branch_taken_0x2cdd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd64) {
            ctx->pc = 0x2CDD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD64u;
            // 0x2cdd68: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD98u;
            goto label_2cdd98;
        }
    }
    ctx->pc = 0x2CDD6Cu;
    // 0x2cdd6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdd70: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDD70u;
    {
        const bool branch_taken_0x2cdd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd70) {
            ctx->pc = 0x2CDD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD70u;
            // 0x2cdd74: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD98u;
            goto label_2cdd98;
        }
    }
    ctx->pc = 0x2CDD78u;
    // 0x2cdd78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD78u;
    {
        const bool branch_taken_0x2cdd78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD78u;
        // 0x2cdd7c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd78) {
            ctx->pc = 0x2CDD88u;
            goto label_2cdd88;
        }
    }
    ctx->pc = 0x2CDD80u;
    // 0x2cdd80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD80u;
    {
        const bool branch_taken_0x2cdd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD80u;
        // 0x2cdd84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd80) {
            ctx->pc = 0x2CDD90u;
            goto label_2cdd90;
        }
    }
    ctx->pc = 0x2CDD88u;
label_2cdd88:
    // 0x2cdd88: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdd8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdd90:
    // 0x2cdd90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdd94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdd98:
    // 0x2cdd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd9c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDD9Cu;
    SET_GPR_U32(ctx, 31, 0x2CDDA4u);
    ctx->pc = 0x2CDDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD9Cu;
    // 0x2cdda0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDD9Cu, 0x2CDDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDA4u;
label_2cdda4:
    // 0x2cdda4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDDA4u;
    {
        const bool branch_taken_0x2cdda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdda4) {
            ctx->pc = 0x2CDDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDA4u;
            // 0x2cdda8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDDD8u;
            goto label_2cddd8;
        }
    }
    ctx->pc = 0x2CDDACu;
    // 0x2cddac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cddacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cddb0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDDB0u;
    {
        const bool branch_taken_0x2cddb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddb0) {
            ctx->pc = 0x2CDDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDB0u;
            // 0x2cddb4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDDD8u;
            goto label_2cddd8;
        }
    }
    ctx->pc = 0x2CDDB8u;
    // 0x2cddb8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDDB8u;
    {
        const bool branch_taken_0x2cddb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDB8u;
        // 0x2cddbc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddb8) {
            ctx->pc = 0x2CDDC8u;
            goto label_2cddc8;
        }
    }
    ctx->pc = 0x2CDDC0u;
    // 0x2cddc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDDC0u;
    {
        const bool branch_taken_0x2cddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDC0u;
        // 0x2cddc4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddc0) {
            ctx->pc = 0x2CDDD0u;
            goto label_2cddd0;
        }
    }
    ctx->pc = 0x2CDDC8u;
label_2cddc8:
    // 0x2cddc8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cddcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cddd0:
    // 0x2cddd0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cddd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cddd8:
    // 0x2cddd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdddc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDDDCu;
    SET_GPR_U32(ctx, 31, 0x2CDDE4u);
    ctx->pc = 0x2CDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDDCu;
    // 0x2cdde0: 0x24a5e818  addiu       $a1, $a1, -0x17E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDDDCu, 0x2CDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDE4u;
label_2cdde4:
    // 0x2cdde4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDDE4u;
    {
        const bool branch_taken_0x2cdde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdde4) {
            ctx->pc = 0x2CDDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDE4u;
            // 0x2cdde8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE18u;
            goto label_2cde18;
        }
    }
    ctx->pc = 0x2CDDECu;
    // 0x2cddec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cddf0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDDF0u;
    {
        const bool branch_taken_0x2cddf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddf0) {
            ctx->pc = 0x2CDDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDF0u;
            // 0x2cddf4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE18u;
            goto label_2cde18;
        }
    }
    ctx->pc = 0x2CDDF8u;
    // 0x2cddf8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDDF8u;
    {
        const bool branch_taken_0x2cddf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDF8u;
        // 0x2cddfc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddf8) {
            ctx->pc = 0x2CDE08u;
            goto label_2cde08;
        }
    }
    ctx->pc = 0x2CDE00u;
    // 0x2cde00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE00u;
    {
        const bool branch_taken_0x2cde00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE00u;
        // 0x2cde04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde00) {
            ctx->pc = 0x2CDE10u;
            goto label_2cde10;
        }
    }
    ctx->pc = 0x2CDE08u;
label_2cde08:
    // 0x2cde08: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cde08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cde0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cde10:
    // 0x2cde10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cde10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cde14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cde14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cde18:
    // 0x2cde18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cde18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDE1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE24u);
    ctx->pc = 0x2CDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE1Cu;
    // 0x2cde20: 0x24a5e830  addiu       $a1, $a1, -0x17D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDE1Cu, 0x2CDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE24u;
label_2cde24:
    // 0x2cde24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDE24u;
    {
        const bool branch_taken_0x2cde24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde24) {
            ctx->pc = 0x2CDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDE24u;
            // 0x2cde28: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE58u;
            goto label_2cde58;
        }
    }
    ctx->pc = 0x2CDE2Cu;
    // 0x2cde2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cde30: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDE30u;
    {
        const bool branch_taken_0x2cde30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde30) {
            ctx->pc = 0x2CDE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDE30u;
            // 0x2cde34: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE58u;
            goto label_2cde58;
        }
    }
    ctx->pc = 0x2CDE38u;
    // 0x2cde38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE38u;
    {
        const bool branch_taken_0x2cde38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE38u;
        // 0x2cde3c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde38) {
            ctx->pc = 0x2CDE48u;
            goto label_2cde48;
        }
    }
    ctx->pc = 0x2CDE40u;
    // 0x2cde40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE40u;
    {
        const bool branch_taken_0x2cde40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE40u;
        // 0x2cde44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde40) {
            ctx->pc = 0x2CDE50u;
            goto label_2cde50;
        }
    }
    ctx->pc = 0x2CDE48u;
label_2cde48:
    // 0x2cde48: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cde48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cde4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cde4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cde50:
    // 0x2cde50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cde54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cde54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cde58:
    // 0x2cde58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cde58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDE5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE64u);
    ctx->pc = 0x2CDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE5Cu;
    // 0x2cde60: 0x24a5e840  addiu       $a1, $a1, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDE5Cu, 0x2CDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE64u;
label_2cde64:
    // 0x2cde64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDE64u;
    {
        const bool branch_taken_0x2cde64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE64u;
        // 0x2cde68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde64) {
            ctx->pc = 0x2CDE98u;
            goto label_2cde98;
        }
    }
    ctx->pc = 0x2CDE6Cu;
    // 0x2cde6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cde6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cde70: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CDE70u;
    {
        const bool branch_taken_0x2cde70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde70) {
            ctx->pc = 0x2CDE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDE70u;
            // 0x2cde74: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE9Cu;
            goto label_2cde9c;
        }
    }
    ctx->pc = 0x2CDE78u;
    // 0x2cde78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE78u;
    {
        const bool branch_taken_0x2cde78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE78u;
        // 0x2cde7c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde78) {
            ctx->pc = 0x2CDE88u;
            goto label_2cde88;
        }
    }
    ctx->pc = 0x2CDE80u;
    // 0x2cde80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE80u;
    {
        const bool branch_taken_0x2cde80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE80u;
        // 0x2cde84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde80) {
            ctx->pc = 0x2CDE90u;
            goto label_2cde90;
        }
    }
    ctx->pc = 0x2CDE88u;
label_2cde88:
    // 0x2cde88: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cde88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cde8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cde8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cde90:
    // 0x2cde90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cde90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cde94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cde94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cde98:
    // 0x2cde98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cde98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cde9c:
    // 0x2cde9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cde9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEA0u;
        // 0x2cdea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDEA8u;
}
