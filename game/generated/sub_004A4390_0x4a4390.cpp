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

// Function: sub_004A4390
// Address: 0x4a4390 - 0x4a44b0
void sub_004A4390_0x4a4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4390_0x4a4390");
#endif

    ctx->pc = 0x4a4390u;

    // 0x4a4390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a4394: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x4a4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a4398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a439c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a439cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a43a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a43a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a43a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a43a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a43ac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a43acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a43b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a43b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a43b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a43b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a43b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a43bc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a43bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a43c0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4A43C0u;
    {
        const bool branch_taken_0x4a43c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43C0u;
        // 0x4a43c4: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43c0) {
            ctx->pc = 0x4A448Cu;
            goto label_4a448c;
        }
    }
    ctx->pc = 0x4A43C8u;
    // 0x4a43c8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a43c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a43cc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4a43ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a43d0: 0x24840c08  addiu       $a0, $a0, 0xC08
    ctx->pc = 0x4a43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3080));
    // 0x4a43d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a43d8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a43d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a43dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a43dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a43e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a43e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a43e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a43e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a43ec: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x4a43ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a43f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a43f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a43f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a43f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a43f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a43fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a43fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4400: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a4400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a4404: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a4404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a4408: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a4408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a440c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4410: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4414: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4418: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a4418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a441c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4420: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4a4420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4428: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a4428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a442c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a442cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a4430: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a4430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a4434: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a4434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a4438: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a443c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4440: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a4440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a4444: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a444c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a444cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a4450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4454: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a4454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4458: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4a4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4a445c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4460: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4464: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a4464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a4468: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a446c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a446cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a4470: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a4470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4474: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4478: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a447c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a4480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4484: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4488: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a4488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4a448c:
    // 0x4a448c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4490: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a4490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a4494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A4494u;
    {
        const bool branch_taken_0x4a4494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4494u;
        // 0x4a4498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4494) {
            ctx->pc = 0x4A44A8u;
            goto label_4a44a8;
        }
    }
    ctx->pc = 0x4A449Cu;
    // 0x4a449c: 0x812381a  j           func_48E068
    ctx->pc = 0x4A449Cu;
    ctx->pc = 0x4A44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A449Cu;
    // 0x4a44a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E068u;
    sub_0048E068_0x48e068(rdram, ctx, runtime); return;
    ctx->pc = 0x4A44A4u;
    // 0x4a44a4: 0x0  nop
    ctx->pc = 0x4a44a4u;
    // NOP
label_4a44a8:
    // 0x4a44a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A44A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A44A8u;
        // 0x4a44ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A44A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A44B0u;
}
