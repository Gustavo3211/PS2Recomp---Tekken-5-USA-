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

// Function: sub_005061F8
// Address: 0x5061f8 - 0x506290
void sub_005061F8_0x5061f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005061F8_0x5061f8");
#endif

    switch (ctx->pc) {
        case 0x506278u: goto label_506278;
        default: break;
    }

    ctx->pc = 0x5061f8u;

    // 0x5061f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5061f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5061fc: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5061fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x506200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x506204: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x506204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x506208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x506208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50620c: 0x2610c52c  addiu       $s0, $s0, -0x3AD4
    ctx->pc = 0x50620cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952236));
    // 0x506210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x506210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x506214: 0x24a5c548  addiu       $a1, $a1, -0x3AB8
    ctx->pc = 0x506214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952264));
    // 0x506218: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x506218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50621c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50621cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x506220: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x506220u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC548u));
    // 0x506224: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x506224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x506228: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x506228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50622c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x506230: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x506230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EC52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC52Cu, _value); } while (0);
    // 0x506234: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506238: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x506238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50623c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506240: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x506240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x506244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506248: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x506248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50624c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506250: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x506250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506254: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x506254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x506258: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x506258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50625c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506260: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x506260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x506264: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x506264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506268: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x506268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50626c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x506270: 0xc141810  jal         func_506040
    ctx->pc = 0x506270u;
    SET_GPR_U32(ctx, 31, 0x506278u);
    ctx->pc = 0x506274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506270u;
    // 0x506274: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506040u, 0x506270u, 0x506278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506278u;
label_506278:
    // 0x506278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x506278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50627c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x50627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x506280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x506280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x506284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x506288: 0x3e00008  jr          $ra
    ctx->pc = 0x506288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506288u;
        // 0x50628c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506290u;
}
