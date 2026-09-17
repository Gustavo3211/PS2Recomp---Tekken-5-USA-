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

// Function: sub_004D2868
// Address: 0x4d2868 - 0x4d2ba0
void sub_004D2868_0x4d2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2868_0x4d2868");
#endif

    switch (ctx->pc) {
        case 0x4d286cu: goto label_4d286c;
        case 0x4d2880u: goto label_4d2880;
        case 0x4d28a8u: goto label_4d28a8;
        case 0x4d28d0u: goto label_4d28d0;
        case 0x4d2910u: goto label_4d2910;
        case 0x4d2938u: goto label_4d2938;
        case 0x4d2968u: goto label_4d2968;
        case 0x4d2990u: goto label_4d2990;
        case 0x4d29b8u: goto label_4d29b8;
        case 0x4d29e0u: goto label_4d29e0;
        case 0x4d2a14u: goto label_4d2a14;
        case 0x4d2a64u: goto label_4d2a64;
        case 0x4d2b58u: goto label_4d2b58;
        case 0x4d2b68u: goto label_4d2b68;
        case 0x4d2b78u: goto label_4d2b78;
        case 0x4d2b88u: goto label_4d2b88;
        default: break;
    }

    ctx->pc = 0x4d2868u;

    // 0x4d2868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d286c:
    // 0x4d286c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d286cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d2870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2874: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2874u;
        // 0x4d2878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D287Cu;
    // 0x4d287c: 0x0  nop
    ctx->pc = 0x4d287cu;
    // NOP
label_4d2880:
    // 0x4d2880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d2884: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d2888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d288c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d288cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d2890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2894: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d2894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d2898: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d2898u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d289c: 0x8134a2a  j           func_4D28A8
    ctx->pc = 0x4D289Cu;
    ctx->pc = 0x4D28A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D289Cu;
    // 0x4d28a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D28A8u;
    goto label_4d28a8;
    ctx->pc = 0x4D28A4u;
    // 0x4d28a4: 0x0  nop
    ctx->pc = 0x4d28a4u;
    // NOP
label_4d28a8:
    // 0x4d28a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d28a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d28ac: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d28b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d28b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d28b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d28b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d28b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d28b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d28bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d28c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d28c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d28c4: 0x8134a34  j           func_4D28D0
    ctx->pc = 0x4D28C4u;
    ctx->pc = 0x4D28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D28C4u;
    // 0x4d28c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D28D0u;
    goto label_4d28d0;
    ctx->pc = 0x4D28CCu;
    // 0x4d28cc: 0x0  nop
    ctx->pc = 0x4d28ccu;
    // NOP
label_4d28d0:
    // 0x4d28d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d28d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d28d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d28d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d28dc: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4d28dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4d28e0: 0x2442015e  addiu       $v0, $v0, 0x15E
    ctx->pc = 0x4d28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 350));
    // 0x4d28e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d28e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d28e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d28ec: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4d28ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d28f0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D28F0u;
    {
        const bool branch_taken_0x4d28f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4D28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D28F0u;
        // 0x4d28f4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d28f0) {
            ctx->pc = 0x4D2904u;
            goto label_4d2904;
        }
    }
    ctx->pc = 0x4D28F8u;
    // 0x4d28f8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d28f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d28fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d2900: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d2900u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d2904:
    // 0x4d2904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2908: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D2908u;
    ctx->pc = 0x4D290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2908u;
    // 0x4d290c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D2910u;
label_4d2910:
    // 0x4d2910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d2914: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d2914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d2918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d291c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d291cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d2920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2924: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d2928: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d2928u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d292c: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D292Cu;
    ctx->pc = 0x4D2930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D292Cu;
    // 0x4d2930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D2934u;
    // 0x4d2934: 0x0  nop
    ctx->pc = 0x4d2934u;
    // NOP
label_4d2938:
    // 0x4d2938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d293c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d293cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d2944: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4d2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4d2948: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4d2948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d294c: 0x244201bc  addiu       $v0, $v0, 0x1BC
    ctx->pc = 0x4d294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4d2950: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d2950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d2954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2958: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d2958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d295c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4d295cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d2960: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D2960u;
    ctx->pc = 0x4D2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2960u;
    // 0x4d2964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D2968u;
label_4d2968:
    // 0x4d2968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d296c: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d2970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d2974: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d2974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d2978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d297c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d2980: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d2980u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d2984: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D2984u;
    ctx->pc = 0x4D2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2984u;
    // 0x4d2988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D298Cu;
    // 0x4d298c: 0x0  nop
    ctx->pc = 0x4d298cu;
    // NOP
label_4d2990:
    // 0x4d2990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d2994: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d2998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d299c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d299cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d29a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d29a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d29a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d29a8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d29a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d29ac: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D29ACu;
    ctx->pc = 0x4D29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D29ACu;
    // 0x4d29b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D29B4u;
    // 0x4d29b4: 0x0  nop
    ctx->pc = 0x4d29b4u;
    // NOP
label_4d29b8:
    // 0x4d29b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d29b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d29bc: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4d29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4d29c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d29c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d29c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d29c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d29c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d29c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d29cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d29d0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d29d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d29d4: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D29D4u;
    ctx->pc = 0x4D29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D29D4u;
    // 0x4d29d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D29DCu;
    // 0x4d29dc: 0x0  nop
    ctx->pc = 0x4d29dcu;
    // NOP
label_4d29e0:
    // 0x4d29e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d29e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4d29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4d29e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d29e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d29ec: 0xa48201bc  sh          $v0, 0x1BC($a0)
    ctx->pc = 0x4d29ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d29f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d29f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d29f4: 0x8134a80  j           func_4D2A00
    ctx->pc = 0x4D29F4u;
    ctx->pc = 0x4D29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D29F4u;
    // 0x4d29f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2A00u;
    goto label_4d2a00;
    ctx->pc = 0x4D29FCu;
    // 0x4d29fc: 0x0  nop
    ctx->pc = 0x4d29fcu;
    // NOP
label_4d2a00:
    // 0x4d2a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d2a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d2a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d2a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d2a0c: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4D2A0Cu;
    SET_GPR_U32(ctx, 31, 0x4D2A14u);
    ctx->pc = 0x4D2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2A0Cu;
    // 0x4d2a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4D2A0Cu, 0x4D2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2A14u;
label_4d2a14:
    // 0x4d2a14: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d2a14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d2a18: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4d2a18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4d2a1c: 0x25291034  addiu       $t1, $t1, 0x1034
    ctx->pc = 0x4d2a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4148));
    // 0x4d2a20: 0x254a1038  addiu       $t2, $t2, 0x1038
    ctx->pc = 0x4d2a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4152));
    // 0x4d2a24: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4d2a24u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1034u));
    // 0x4d2a28: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d2a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2a2c: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4d2a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1038u));
    // 0x4d2a30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2a34: 0x346304a1  ori         $v1, $v1, 0x4A1
    ctx->pc = 0x4d2a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1185);
    // 0x4d2a38: 0x344204a3  ori         $v0, $v0, 0x4A3
    ctx->pc = 0x4d2a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1187);
    // 0x4d2a3c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d2a3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d2a40: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d2a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d2a44: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d2a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d2a48: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d2a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4d2a4c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4d2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4d2a50: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4d2a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2a54: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4d2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4d2a58: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4d2a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2a5c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4D2A5Cu;
    SET_GPR_U32(ctx, 31, 0x4D2A64u);
    ctx->pc = 0x4D2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2A5Cu;
    // 0x4d2a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4D2A5Cu, 0x4D2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2A64u;
label_4d2a64:
    // 0x4d2a64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d2a68: 0x2465102c  addiu       $a1, $v1, 0x102C
    ctx->pc = 0x4d2a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4140));
    // 0x4d2a6c: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x4d2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4d2a70: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d2a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d2a74: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d2a74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2a78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F102Cu));
    // 0x4d2a7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d2a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d2a80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2a84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2a88: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d2a8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2a90: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2a90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2a94: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x4d2a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x4d2a98: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d2a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d2a9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2aa0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d2aa4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d2aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2aa8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D2AA8u;
    {
        const bool branch_taken_0x4d2aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d2aa8) {
            ctx->pc = 0x4D2AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2AA8u;
            // 0x4d2aac: 0x94c30000  lhu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2AC8u;
            goto label_4d2ac8;
        }
    }
    ctx->pc = 0x4D2AB0u;
    // 0x4d2ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2abc: 0x8134bfa  j           func_4D2FE8
    ctx->pc = 0x4D2ABCu;
    ctx->pc = 0x4D2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2ABCu;
    // 0x4d2ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2FE8u, 0x4D2ABCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D2AC4u;
    // 0x4d2ac4: 0x0  nop
    ctx->pc = 0x4d2ac4u;
    // NOP
label_4d2ac8:
    // 0x4d2ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d2acc: 0x3063fcff  andi        $v1, $v1, 0xFCFF
    ctx->pc = 0x4d2accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64767);
    // 0x4d2ad0: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4d2ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d2ad4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2ad8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2adc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d2ae0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4d2ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4d2ae4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2ae8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d2ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d2aec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2af0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d2af4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2af8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2af8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2afc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4d2afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4d2b00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4d2b04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2b08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d2b0c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d2b10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d2b14: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4d2b14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d2b18: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4D2B18u;
    {
        const bool branch_taken_0x4d2b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4D2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B18u;
        // 0x4d2b1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b18) {
            ctx->pc = 0x4D2B60u;
            goto label_4d2b60;
        }
    }
    ctx->pc = 0x4D2B20u;
    // 0x4d2b20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D2B20u;
    {
        const bool branch_taken_0x4d2b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2b20) {
            ctx->pc = 0x4D2B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2B20u;
            // 0x4d2b24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2B38u;
            goto label_4d2b38;
        }
    }
    ctx->pc = 0x4D2B28u;
    // 0x4d2b28: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2B28u;
    {
        const bool branch_taken_0x4d2b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2b28) {
            ctx->pc = 0x4D2B50u;
            goto label_4d2b50;
        }
    }
    ctx->pc = 0x4D2B30u;
    // 0x4d2b30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4D2B30u;
    {
        const bool branch_taken_0x4d2b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B30u;
        // 0x4d2b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b30) {
            ctx->pc = 0x4D2B8Cu;
            goto label_4d2b8c;
        }
    }
    ctx->pc = 0x4D2B38u;
label_4d2b38:
    // 0x4d2b38: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D2B38u;
    {
        const bool branch_taken_0x4d2b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B38u;
        // 0x4d2b3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b38) {
            ctx->pc = 0x4D2B70u;
            goto label_4d2b70;
        }
    }
    ctx->pc = 0x4D2B40u;
    // 0x4d2b40: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D2B40u;
    {
        const bool branch_taken_0x4d2b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4d2b40) {
            ctx->pc = 0x4D2B80u;
            goto label_4d2b80;
        }
    }
    ctx->pc = 0x4D2B48u;
    // 0x4d2b48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4D2B48u;
    {
        const bool branch_taken_0x4d2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B48u;
        // 0x4d2b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b48) {
            ctx->pc = 0x4D2B8Cu;
            goto label_4d2b8c;
        }
    }
    ctx->pc = 0x4D2B50u;
label_4d2b50:
    // 0x4d2b50: 0xc134b5e  jal         func_4D2D78
    ctx->pc = 0x4D2B50u;
    SET_GPR_U32(ctx, 31, 0x4D2B58u);
    ctx->pc = 0x4D2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2B50u;
    // 0x4d2b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2D78u, 0x4D2B50u, 0x4D2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2B58u;
label_4d2b58:
    // 0x4d2b58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D2B58u;
    {
        const bool branch_taken_0x4d2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B58u;
        // 0x4d2b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b58) {
            ctx->pc = 0x4D2B8Cu;
            goto label_4d2b8c;
        }
    }
    ctx->pc = 0x4D2B60u;
label_4d2b60:
    // 0x4d2b60: 0xc134ae8  jal         func_4D2BA0
    ctx->pc = 0x4D2B60u;
    SET_GPR_U32(ctx, 31, 0x4D2B68u);
    ctx->pc = 0x4D2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2B60u;
    // 0x4d2b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2BA0u, 0x4D2B60u, 0x4D2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2B68u;
label_4d2b68:
    // 0x4d2b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D2B68u;
    {
        const bool branch_taken_0x4d2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B68u;
        // 0x4d2b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b68) {
            ctx->pc = 0x4D2B8Cu;
            goto label_4d2b8c;
        }
    }
    ctx->pc = 0x4D2B70u;
label_4d2b70:
    // 0x4d2b70: 0xc134b1e  jal         func_4D2C78
    ctx->pc = 0x4D2B70u;
    SET_GPR_U32(ctx, 31, 0x4D2B78u);
    ctx->pc = 0x4D2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2B70u;
    // 0x4d2b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2C78u, 0x4D2B70u, 0x4D2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2B78u;
label_4d2b78:
    // 0x4d2b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D2B78u;
    {
        const bool branch_taken_0x4d2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B78u;
        // 0x4d2b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b78) {
            ctx->pc = 0x4D2B8Cu;
            goto label_4d2b8c;
        }
    }
    ctx->pc = 0x4D2B80u;
label_4d2b80:
    // 0x4d2b80: 0xc134b54  jal         func_4D2D50
    ctx->pc = 0x4D2B80u;
    SET_GPR_U32(ctx, 31, 0x4D2B88u);
    ctx->pc = 0x4D2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2B80u;
    // 0x4d2b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2D50u, 0x4D2B80u, 0x4D2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2B88u;
label_4d2b88:
    // 0x4d2b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2b8c:
    // 0x4d2b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d2b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2b94: 0x8134bfa  j           func_4D2FE8
    ctx->pc = 0x4D2B94u;
    ctx->pc = 0x4D2B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2B94u;
    // 0x4d2b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2FE8u, 0x4D2B94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D2B9Cu;
    // 0x4d2b9c: 0x0  nop
    ctx->pc = 0x4d2b9cu;
    // NOP
    ctx->pc = 0x4d2ba0u;
}
