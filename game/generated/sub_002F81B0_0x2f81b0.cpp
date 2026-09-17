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

// Function: sub_002F81B0
// Address: 0x2f81b0 - 0x2f82a8
void sub_002F81B0_0x2f81b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F81B0_0x2f81b0");
#endif

    ctx->pc = 0x2f81b0u;

    // 0x2f81b0: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x2f81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2f81b4: 0x30a58090  andi        $a1, $a1, 0x8090
    ctx->pc = 0x2f81b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32912);
    // 0x2f81b8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F81B8u;
    {
        const bool branch_taken_0x2f81b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81B8u;
        // 0x2f81bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81b8) {
            ctx->pc = 0x2F82A0u;
            goto label_2f82a0;
        }
    }
    ctx->pc = 0x2F81C0u;
    // 0x2f81c0: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F81C0u;
    {
        const bool branch_taken_0x2f81c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81C0u;
        // 0x2f81c4: 0x24850140  addiu       $a1, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81c0) {
            ctx->pc = 0x2F82A0u;
            goto label_2f82a0;
        }
    }
    ctx->pc = 0x2F81C8u;
    // 0x2f81c8: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x2f81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x2f81cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f81d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F81D0u;
    {
        const bool branch_taken_0x2f81d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81D0u;
        // 0x2f81d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81d0) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F81D8u;
    // 0x2f81d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f81dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f81e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F81E0u;
    {
        const bool branch_taken_0x2f81e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f81e0) {
            ctx->pc = 0x2F81E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F81E0u;
            // 0x2f81e4: 0x8cc20120  lw          $v0, 0x120($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F81F8u;
            goto label_2f81f8;
        }
    }
    ctx->pc = 0x2F81E8u;
label_2f81e8:
    // 0x2f81e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f81ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f81ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f81f0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f81f4: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x2f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f81f8:
    // 0x2f81f8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2F81F8u;
    {
        const bool branch_taken_0x2f81f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f81f8) {
            ctx->pc = 0x2F81FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F81F8u;
            // 0x2f81fc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8238u;
            goto label_2f8238;
        }
    }
    ctx->pc = 0x2F8200u;
    // 0x2f8200: 0x24840148  addiu       $a0, $a0, 0x148
    ctx->pc = 0x2f8200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    // 0x2f8204: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f8204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8208u;
    {
        const bool branch_taken_0x2f8208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8208u;
        // 0x2f820c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8208) {
            ctx->pc = 0x2F8220u;
            goto label_2f8220;
        }
    }
    ctx->pc = 0x2F8210u;
    // 0x2f8210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8214: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f8218: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8218u;
    {
        const bool branch_taken_0x2f8218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8218) {
            ctx->pc = 0x2F821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8218u;
            // 0x2f821c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8230u;
            goto label_2f8230;
        }
    }
    ctx->pc = 0x2F8220u;
label_2f8220:
    // 0x2f8220: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f8220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f8224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8228: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f8228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f822c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8230:
    // 0x2f8230: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F8230u;
    {
        const bool branch_taken_0x2f8230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8230u;
        // 0x2f8234: 0xaca200fc  sw          $v0, 0xFC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8230) {
            ctx->pc = 0x2F829Cu;
            goto label_2f829c;
        }
    }
    ctx->pc = 0x2F8238u;
label_2f8238:
    // 0x2f8238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8238u;
    {
        const bool branch_taken_0x2f8238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8238u;
        // 0x2f823c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8238) {
            ctx->pc = 0x2F8250u;
            goto label_2f8250;
        }
    }
    ctx->pc = 0x2F8240u;
    // 0x2f8240: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8244: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8248: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8248u;
    {
        const bool branch_taken_0x2f8248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8248) {
            ctx->pc = 0x2F824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8248u;
            // 0x2f824c: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8260u;
            goto label_2f8260;
        }
    }
    ctx->pc = 0x2F8250u;
label_2f8250:
    // 0x2f8250: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f8250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f8254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8258: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f8258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f825c: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8260:
    // 0x2f8260: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f8260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f8264: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F8264u;
    {
        const bool branch_taken_0x2f8264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8264u;
        // 0x2f8268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8264) {
            ctx->pc = 0x2F82A0u;
            goto label_2f82a0;
        }
    }
    ctx->pc = 0x2F826Cu;
    // 0x2f826c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f8270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8270u;
    {
        const bool branch_taken_0x2f8270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8270u;
        // 0x2f8274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8270) {
            ctx->pc = 0x2F8288u;
            goto label_2f8288;
        }
    }
    ctx->pc = 0x2F8278u;
    // 0x2f8278: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f827c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8280: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8280u;
    {
        const bool branch_taken_0x2f8280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8280) {
            ctx->pc = 0x2F8284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8280u;
            // 0x2f8284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8298u;
            goto label_2f8298;
        }
    }
    ctx->pc = 0x2F8288u;
label_2f8288:
    // 0x2f8288: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f8288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f828c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8290: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f8290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f8294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8298:
    // 0x2f8298: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x2f8298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
label_2f829c:
    // 0x2f829c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f82a0:
    // 0x2f82a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F82A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F82A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F82A8u;
}
