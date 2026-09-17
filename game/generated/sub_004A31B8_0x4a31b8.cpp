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

// Function: sub_004A31B8
// Address: 0x4a31b8 - 0x4a32f8
void sub_004A31B8_0x4a31b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A31B8_0x4a31b8");
#endif

    switch (ctx->pc) {
        case 0x4a31ccu: goto label_4a31cc;
        case 0x4a32e4u: goto label_4a32e4;
        default: break;
    }

    ctx->pc = 0x4a31b8u;

    // 0x4a31b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a31bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a31bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a31c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a31c4: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A31C4u;
    SET_GPR_U32(ctx, 31, 0x4A31CCu);
    ctx->pc = 0x4A31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A31C4u;
    // 0x4a31c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A31C4u, 0x4A31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A31CCu;
label_4a31cc:
    // 0x4a31cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a31d0: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x4a31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x4a31d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4a31d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a31d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a31d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a31dc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4a31dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a31e0: 0x240a04e3  addiu       $t2, $zero, 0x4E3
    ctx->pc = 0x4a31e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1251));
    // 0x4a31e4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x4a31e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a31e8: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x4a31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a31ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a31f0: 0x240dff65  addiu       $t5, $zero, -0x9B
    ctx->pc = 0x4a31f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967141));
    // 0x4a31f4: 0x240e0021  addiu       $t6, $zero, 0x21
    ctx->pc = 0x4a31f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4a31f8: 0x240f741f  addiu       $t7, $zero, 0x741F
    ctx->pc = 0x4a31f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29727));
    // 0x4a31fc: 0xa449000e  sh          $t1, 0xE($v0)
    ctx->pc = 0x4a31fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a3200: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x4a3200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4a3204: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4a3204u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3208: 0x3c0701a1  lui         $a3, 0x1A1
    ctx->pc = 0x4a3208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)417 << 16));
    // 0x4a320c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3210: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a3210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a3214: 0x3c08feea  lui         $t0, 0xFEEA
    ctx->pc = 0x4a3214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65258 << 16));
    // 0x4a3218: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x4a3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4a321c: 0xa4450148  sh          $a1, 0x148($v0)
    ctx->pc = 0x4a321cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a3220: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4a3220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a3224: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a3224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a3228: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a322c: 0xa44a000c  sh          $t2, 0xC($v0)
    ctx->pc = 0x4a322cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x4a3230: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3234: 0xa46b002e  sh          $t3, 0x2E($v1)
    ctx->pc = 0x4a3234u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 11));
    // 0x4a3238: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a323c: 0xa4490030  sh          $t1, 0x30($v0)
    ctx->pc = 0x4a323cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a3240: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3244: 0xa4600022  sh          $zero, 0x22($v1)
    ctx->pc = 0x4a3244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a324c: 0xa4460024  sh          $a2, 0x24($v0)
    ctx->pc = 0x4a324cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3250: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3254: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x4a3254u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3258: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a325c: 0xa4460028  sh          $a2, 0x28($v0)
    ctx->pc = 0x4a325cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3264: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4a3264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3268: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a326c: 0xa446002c  sh          $a2, 0x2C($v0)
    ctx->pc = 0x4a326cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3270: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3274: 0xa46d0130  sh          $t5, 0x130($v1)
    ctx->pc = 0x4a3274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 13));
    // 0x4a3278: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a327c: 0xa44e0132  sh          $t6, 0x132($v0)
    ctx->pc = 0x4a327cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 306), (uint16_t)GPR_U32(ctx, 14));
    // 0x4a3280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3284: 0xa4600134  sh          $zero, 0x134($v1)
    ctx->pc = 0x4a3284u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3288: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a328c: 0xa44f0118  sh          $t7, 0x118($v0)
    ctx->pc = 0x4a328cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 15));
    // 0x4a3290: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3294: 0xa470011c  sh          $s0, 0x11C($v1)
    ctx->pc = 0x4a3294u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 284), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a3298: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a3298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a329c: 0x24c60124  addiu       $a2, $a2, 0x124
    ctx->pc = 0x4a329cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 292));
    // 0x4a32a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a32a4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a32a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a32a8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a32a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a32ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a32acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a32b0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4a32b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a32b4: 0x24e70128  addiu       $a3, $a3, 0x128
    ctx->pc = 0x4a32b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
    // 0x4a32b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a32bc: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x4a32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x4a32c0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a32c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a32c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a32cc: 0x2463012c  addiu       $v1, $v1, 0x12C
    ctx->pc = 0x4a32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x4a32d0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a32d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a32d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a32d8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a32d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a32dc: 0xc123bdc  jal         func_48EF70
    ctx->pc = 0x4A32DCu;
    SET_GPR_U32(ctx, 31, 0x4A32E4u);
    ctx->pc = 0x4A32E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A32DCu;
    // 0x4a32e0: 0xa4c00164  sh          $zero, 0x164($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 356), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF70u, 0x4A32DCu, 0x4A32E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A32E4u;
label_4a32e4:
    // 0x4a32e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a32e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a32e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a32e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a32ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4A32ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A32ECu;
        // 0x4a32f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A32ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A32F4u;
    // 0x4a32f4: 0x0  nop
    ctx->pc = 0x4a32f4u;
    // NOP
    ctx->pc = 0x4a32f8u;
}
