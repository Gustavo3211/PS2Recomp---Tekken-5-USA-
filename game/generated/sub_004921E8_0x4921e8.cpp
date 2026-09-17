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

// Function: sub_004921E8
// Address: 0x4921e8 - 0x492328
void sub_004921E8_0x4921e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004921E8_0x4921e8");
#endif

    switch (ctx->pc) {
        case 0x4922a8u: goto label_4922a8;
        default: break;
    }

    ctx->pc = 0x4921e8u;

    // 0x4921e8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4921e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4921ec: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x4921ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x4921f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4921f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4921f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4921f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4921f8: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x4921f8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x4921fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4921FCu;
    {
        const bool branch_taken_0x4921fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4921FCu;
        // 0x492200: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4921fc) {
            ctx->pc = 0x492218u;
            goto label_492218;
        }
    }
    ctx->pc = 0x492204u;
    // 0x492204: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x492204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x492208: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x492208u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49220c: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x49220cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
    // 0x492210: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x492210u;
    {
        const bool branch_taken_0x492210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492210) {
            ctx->pc = 0x49229Cu;
            goto label_49229c;
        }
    }
    ctx->pc = 0x492218u;
label_492218:
    // 0x492218: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x492218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x49221c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x49221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x492220: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x492220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x492224: 0x24a60058  addiu       $a2, $a1, 0x58
    ctx->pc = 0x492224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x492228: 0x24a5005c  addiu       $a1, $a1, 0x5C
    ctx->pc = 0x492228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x49222c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x49222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492230: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x492230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x492234: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x492234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x492238: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x492238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49223c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x49223cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x492240: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x492240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x492244: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492244u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492248: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49224c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49224cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492250: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492254: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492258: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49225c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49225cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492260: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492264: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492264u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492268: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49226c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49226cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492270: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492274: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492278: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49227c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49227cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492280: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492284: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x492284u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492288: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49228c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49228cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x492290: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x492290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492294: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x492294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x492298: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x492298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_49229c:
    // 0x49229c: 0x3e00008  jr          $ra
    ctx->pc = 0x49229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4922A4u;
    // 0x4922a4: 0x0  nop
    ctx->pc = 0x4922a4u;
    // NOP
label_4922a8:
    // 0x4922a8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4922a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4922ac: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x4922acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x4922b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4922b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4922b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4922b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4922b8: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x4922b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x4922bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4922BCu;
    {
        const bool branch_taken_0x4922bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4922C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4922BCu;
        // 0x4922c0: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4922bc) {
            ctx->pc = 0x4922D8u;
            goto label_4922d8;
        }
    }
    ctx->pc = 0x4922C4u;
    // 0x4922c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4922c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4922c8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4922c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4922cc: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x4922ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
    // 0x4922d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4922D0u;
    {
        const bool branch_taken_0x4922d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4922d0) {
            ctx->pc = 0x49231Cu;
            goto label_49231c;
        }
    }
    ctx->pc = 0x4922D8u;
label_4922d8:
    // 0x4922d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4922d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4922dc: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4922dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4922e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4922e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4922e4: 0x24a60058  addiu       $a2, $a1, 0x58
    ctx->pc = 0x4922e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x4922e8: 0x24a5005c  addiu       $a1, $a1, 0x5C
    ctx->pc = 0x4922e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x4922ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4922ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4922f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4922f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4922f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4922f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4922f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4922f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4922fc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x4922fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x492300: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x492300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x492304: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x492304u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492308: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x492308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49230c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49230cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x492310: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x492310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492314: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x492314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x492318: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x492318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49231c:
    // 0x49231c: 0x3e00008  jr          $ra
    ctx->pc = 0x49231Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49231Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492324u;
    // 0x492324: 0x0  nop
    ctx->pc = 0x492324u;
    // NOP
    ctx->pc = 0x492328u;
}
