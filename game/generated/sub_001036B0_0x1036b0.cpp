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

// Function: sub_001036B0
// Address: 0x1036b0 - 0x103780
void sub_001036B0_0x1036b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001036B0_0x1036b0");
#endif

    ctx->pc = 0x1036b0u;

    // 0x1036b0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1036b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1036b4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1036b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1036b8: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x1036b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x1036bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1036bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1036c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x1036c4: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x1036c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1036c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1036ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1036d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1036d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1036d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1036d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1036d8: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x1036d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x1036dc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1036DCu;
    {
        const bool branch_taken_0x1036dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036DCu;
        // 0x1036e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036dc) {
            ctx->pc = 0x103724u;
            goto label_103724;
        }
    }
    ctx->pc = 0x1036E4u;
    // 0x1036e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1036e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1036e8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1036e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1036ec: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1036ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1036f0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1036f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1036f4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1036f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1036f8: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x1036f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x1036fc: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x1036fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x103700: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x103700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x103704: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x103704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x103708: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x103708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x10370c: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x10370cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x103710: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x103710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x103714: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x103714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x103718: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x103718u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x10371c: 0x3e00008  jr          $ra
    ctx->pc = 0x10371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10371Cu;
        // 0x103720: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103724u;
label_103724:
    // 0x103724: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x103724u;
    {
        const bool branch_taken_0x103724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103724u;
        // 0x103728: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103724) {
            ctx->pc = 0x103770u;
            goto label_103770;
        }
    }
    ctx->pc = 0x10372Cu;
    // 0x10372c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x103730: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x103730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x103734: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x103734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x103738: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x103738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x10373c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x103740: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x103740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x103744: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x103744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x103748: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x103748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x10374c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10374cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x103750: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x103750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x103754: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x103754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x103758: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x103758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x10375c: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x10375cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x103760: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x103760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x103764: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x103764u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x103768: 0x3e00008  jr          $ra
    ctx->pc = 0x103768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103768u;
        // 0x10376c: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103770u;
label_103770:
    // 0x103770: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x103770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103774: 0x80417dc  j           func_105F70
    ctx->pc = 0x103774u;
    ctx->pc = 0x103778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103774u;
    // 0x103778: 0x24a5d740  addiu       $a1, $a1, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    sub_00105F70_0x105f70(rdram, ctx, runtime); return;
    ctx->pc = 0x10377Cu;
    // 0x10377c: 0x0  nop
    ctx->pc = 0x10377cu;
    // NOP
    ctx->pc = 0x103780u;
}
