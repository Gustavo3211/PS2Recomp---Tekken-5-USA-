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

// Function: sub_00328278
// Address: 0x328278 - 0x328338
void sub_00328278_0x328278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328278_0x328278");
#endif

    ctx->pc = 0x328278u;

    // 0x328278: 0x3c026001  lui         $v0, 0x6001
    ctx->pc = 0x328278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24577 << 16));
    // 0x32827c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x328280: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x328280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x328284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x328288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32828c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x32828cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328290: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x328290u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x328294: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x328294u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x328298: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x328298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32829c: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x32829cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x3282a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3282a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3282a4: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x3282a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x3282a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3282a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3282ac: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x3282acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x3282b0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x3282b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x3282b4: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x3282b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3282b8: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x3282b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3282bc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3282bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x3282c0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3282c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3282c4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3282c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3282c8: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x3282c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x3282cc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3282ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3282d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3282d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3282d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3282d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3282d8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3282d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3282dc: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x3282dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x3282e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3282e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3282e4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x3282e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3282e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3282e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3282ec: 0x5183e  dsrl32      $v1, $a1, 0
    ctx->pc = 0x3282ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3282f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3282f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3282f4: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3282F4u;
    {
        const bool branch_taken_0x3282f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282F4u;
        // 0x3282f8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282f4) {
            ctx->pc = 0x328308u;
            goto label_328308;
        }
    }
    ctx->pc = 0x3282FCu;
    // 0x3282fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3282FCu;
    {
        const bool branch_taken_0x3282fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282FCu;
        // 0x328300: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282fc) {
            ctx->pc = 0x32830Cu;
            goto label_32830c;
        }
    }
    ctx->pc = 0x328304u;
    // 0x328304: 0x0  nop
    ctx->pc = 0x328304u;
    // NOP
label_328308:
    // 0x328308: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x328308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_32830c:
    // 0x32830c: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x32830cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x328310: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x328310u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x328314: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x328314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x328318: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x328318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x32831c: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x32831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x328320: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x328320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x328324: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x328324u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x328328: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x328328u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x32832c: 0x3e00008  jr          $ra
    ctx->pc = 0x32832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32832Cu;
        // 0x328330: 0x25220010  addiu       $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328334u;
    // 0x328334: 0x0  nop
    ctx->pc = 0x328334u;
    // NOP
    ctx->pc = 0x328338u;
}
