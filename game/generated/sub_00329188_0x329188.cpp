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

// Function: sub_00329188
// Address: 0x329188 - 0x329248
void sub_00329188_0x329188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329188_0x329188");
#endif

    ctx->pc = 0x329188u;

    // 0x329188: 0x3c026001  lui         $v0, 0x6001
    ctx->pc = 0x329188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24577 << 16));
    // 0x32918c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x329190: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x329190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x329194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329198: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x329198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32919c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x32919cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291a0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3291a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3291a4: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3291a4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x3291a8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3291a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3291ac: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x3291acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x3291b0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3291b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3291b4: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x3291b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x3291b8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3291b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3291bc: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x3291bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x3291c0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x3291c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x3291c4: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x3291c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3291c8: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x3291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3291cc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3291ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x3291d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3291d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3291d4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3291d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3291d8: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3291dc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3291e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3291e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3291e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3291e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3291e8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3291e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3291ec: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x3291ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x3291f0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3291f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3291f4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x3291f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3291f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3291f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3291fc: 0x5183e  dsrl32      $v1, $a1, 0
    ctx->pc = 0x3291fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x329200: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x329200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x329204: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329204u;
    {
        const bool branch_taken_0x329204 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x329208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329204u;
        // 0x329208: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329204) {
            ctx->pc = 0x329218u;
            goto label_329218;
        }
    }
    ctx->pc = 0x32920Cu;
    // 0x32920c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32920Cu;
    {
        const bool branch_taken_0x32920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32920Cu;
        // 0x329210: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32920c) {
            ctx->pc = 0x32921Cu;
            goto label_32921c;
        }
    }
    ctx->pc = 0x329214u;
    // 0x329214: 0x0  nop
    ctx->pc = 0x329214u;
    // NOP
label_329218:
    // 0x329218: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x329218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_32921c:
    // 0x32921c: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x32921cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x329220: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x329220u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x329224: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x329224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x329228: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x329228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x32922c: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x32922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x329230: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x329230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x329234: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x329234u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x329238: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x329238u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x32923c: 0x3e00008  jr          $ra
    ctx->pc = 0x32923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32923Cu;
        // 0x329240: 0x25220010  addiu       $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329244u;
    // 0x329244: 0x0  nop
    ctx->pc = 0x329244u;
    // NOP
    ctx->pc = 0x329248u;
}
