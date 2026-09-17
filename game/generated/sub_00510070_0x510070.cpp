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

// Function: sub_00510070
// Address: 0x510070 - 0x5104e8
void sub_00510070_0x510070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510070_0x510070");
#endif

    switch (ctx->pc) {
        case 0x5100a4u: goto label_5100a4;
        case 0x510130u: goto label_510130;
        case 0x510160u: goto label_510160;
        case 0x510170u: goto label_510170;
        case 0x5101e8u: goto label_5101e8;
        case 0x5101f0u: goto label_5101f0;
        case 0x5101f8u: goto label_5101f8;
        case 0x510200u: goto label_510200;
        case 0x510208u: goto label_510208;
        case 0x510210u: goto label_510210;
        case 0x510218u: goto label_510218;
        case 0x510220u: goto label_510220;
        case 0x510268u: goto label_510268;
        case 0x510270u: goto label_510270;
        case 0x510280u: goto label_510280;
        case 0x5102c4u: goto label_5102c4;
        case 0x5102ecu: goto label_5102ec;
        case 0x5103b4u: goto label_5103b4;
        case 0x5104a8u: goto label_5104a8;
        default: break;
    }

    ctx->pc = 0x510070u;

label_510070:
    // 0x510070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x510070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x510074: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x510074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x510078: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x510078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x51007c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x51007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510080: 0x2450c698  addiu       $s0, $v0, -0x3968
    ctx->pc = 0x510080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952600));
    // 0x510084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x510084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x510088: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x510088u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC698u));
    // 0x51008c: 0x2471c694  addiu       $s1, $v1, -0x396C
    ctx->pc = 0x51008cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952596));
    // 0x510090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x510090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x510094: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x510094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x510098: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x510098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51009c: 0xc14481c  jal         func_512070
    ctx->pc = 0x51009Cu;
    SET_GPR_U32(ctx, 31, 0x5100A4u);
    ctx->pc = 0x5100A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51009Cu;
    // 0x5100a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x51009Cu, 0x5100A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5100A4u;
label_5100a4:
    // 0x5100a4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x5100a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x5100a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5100a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5100ac: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x5100acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x5100b0: 0x24730054  addiu       $s3, $v1, 0x54
    ctx->pc = 0x5100b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x5100b4: 0x14440022  bne         $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x5100B4u;
    {
        const bool branch_taken_0x5100b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x5100B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5100B4u;
        // 0x5100b8: 0x24720050  addiu       $s2, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5100b4) {
            ctx->pc = 0x510140u;
            goto label_510140;
        }
    }
    ctx->pc = 0x5100BCu;
    // 0x5100bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5100bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100c0: 0x2402023e  addiu       $v0, $zero, 0x23E
    ctx->pc = 0x5100c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 574));
    // 0x5100c4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5100c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5100c8: 0x2402017e  addiu       $v0, $zero, 0x17E
    ctx->pc = 0x5100c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x5100cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5100ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100d0: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x5100d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x5100d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5100d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100d8: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x5100d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x5100dc: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x5100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x5100e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5100e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100e4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x5100e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x5100e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x5100e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x5100ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5100ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100f0: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x5100f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5100f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x5100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x5100f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5100f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5100fc: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x5100fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x510100: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x510100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x510104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x510104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510108: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x510108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x51010c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x51010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510110: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x510110u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x510114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x510114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x510118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x51011c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x51011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x510120: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x510120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x510124: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x510124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x510128: 0xc142162  jal         func_508588
    ctx->pc = 0x510128u;
    SET_GPR_U32(ctx, 31, 0x510130u);
    ctx->pc = 0x51012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510128u;
    // 0x51012c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508588u, 0x510128u, 0x510130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510130u;
label_510130:
    // 0x510130: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x510130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x510134: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x510134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x510138: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x510138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x51013c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51013cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_510140:
    // 0x510140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x510144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x510148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51014c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x51014cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x510150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x510150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x510154: 0x3e00008  jr          $ra
    ctx->pc = 0x510154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510154u;
        // 0x510158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51015Cu;
    // 0x51015c: 0x0  nop
    ctx->pc = 0x51015cu;
    // NOP
label_510160:
    // 0x510160: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x510160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x510164: 0x3e00008  jr          $ra
    ctx->pc = 0x510164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510164u;
        // 0x510168: 0xa440f080  sh          $zero, -0xF80($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294963328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51016Cu;
    // 0x51016c: 0x0  nop
    ctx->pc = 0x51016cu;
    // NOP
label_510170:
    // 0x510170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x510170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x510174: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x510174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x510178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x510178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x51017c: 0x2452f080  addiu       $s2, $v0, -0xF80
    ctx->pc = 0x51017cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x510180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x510184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x510188: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x510188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x51018c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x51018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x510190: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x510190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x510194: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x510194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x510198: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x510198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x51019c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x51019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5101a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x5101a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x5101a4: 0x86430012  lh          $v1, 0x12($s2)
    ctx->pc = 0x5101a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8FF092u));
    // 0x5101a8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x5101A8u;
    {
        const bool branch_taken_0x5101a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5101A8u;
        // 0x5101ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5101a8) {
            ctx->pc = 0x5101E0u;
            goto label_5101e0;
        }
    }
    ctx->pc = 0x5101B0u;
    // 0x5101b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5101b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5101b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5101b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5101b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5101b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5101bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5101bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5101c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5101c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5101c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5101c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5101c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5101c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5101cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5101ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5101d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5101d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5101d4: 0x8144058  j           func_510160
    ctx->pc = 0x5101D4u;
    ctx->pc = 0x5101D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5101D4u;
    // 0x5101d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510160u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_510160;
    ctx->pc = 0x5101DCu;
    // 0x5101dc: 0x0  nop
    ctx->pc = 0x5101dcu;
    // NOP
label_5101e0:
    // 0x5101e0: 0xc142b0a  jal         func_50AC28
    ctx->pc = 0x5101E0u;
    SET_GPR_U32(ctx, 31, 0x5101E8u);
    ctx->pc = 0x5101E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5101E0u;
    // 0x5101e4: 0x26570050  addiu       $s7, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50AC28u, 0x5101E0u, 0x5101E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5101E8u;
label_5101e8:
    // 0x5101e8: 0xc142f92  jal         func_50BE48
    ctx->pc = 0x5101E8u;
    SET_GPR_U32(ctx, 31, 0x5101F0u);
    ctx->pc = 0x5101ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5101E8u;
    // 0x5101ec: 0x265e0054  addiu       $fp, $s2, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BE48u, 0x5101E8u, 0x5101F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5101F0u;
label_5101f0:
    // 0x5101f0: 0xc1436a4  jal         func_50DA90
    ctx->pc = 0x5101F0u;
    SET_GPR_U32(ctx, 31, 0x5101F8u);
    ctx->pc = 0x50DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50DA90u, 0x5101F0u, 0x5101F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5101F8u;
label_5101f8:
    // 0x5101f8: 0xc14363a  jal         func_50D8E8
    ctx->pc = 0x5101F8u;
    SET_GPR_U32(ctx, 31, 0x510200u);
    ctx->pc = 0x50D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D8E8u, 0x5101F8u, 0x510200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510200u;
label_510200:
    // 0x510200: 0xc142408  jal         func_509020
    ctx->pc = 0x510200u;
    SET_GPR_U32(ctx, 31, 0x510208u);
    ctx->pc = 0x509020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509020u, 0x510200u, 0x510208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510208u;
label_510208:
    // 0x510208: 0xc141c20  jal         func_507080
    ctx->pc = 0x510208u;
    SET_GPR_U32(ctx, 31, 0x510210u);
    ctx->pc = 0x507080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507080u, 0x510208u, 0x510210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510210u;
label_510210:
    // 0x510210: 0xc142518  jal         func_509460
    ctx->pc = 0x510210u;
    SET_GPR_U32(ctx, 31, 0x510218u);
    ctx->pc = 0x510214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510210u;
    // 0x510214: 0xa6404dfc  sh          $zero, 0x4DFC($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 19964), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509460u, 0x510210u, 0x510218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510218u;
label_510218:
    // 0x510218: 0xc143dcc  jal         func_50F730
    ctx->pc = 0x510218u;
    SET_GPR_U32(ctx, 31, 0x510220u);
    ctx->pc = 0x50F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F730u, 0x510218u, 0x510220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510220u;
label_510220:
    // 0x510220: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x510220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x510224: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x510224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x510228: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x510228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x51022c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x51022cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x510230: 0x2471c698  addiu       $s1, $v1, -0x3968
    ctx->pc = 0x510230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952600));
    // 0x510234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x510234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x510238: 0x2495c694  addiu       $s5, $a0, -0x396C
    ctx->pc = 0x510238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952596));
    // 0x51023c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x51023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x510240: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x510240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EC694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC694u, _value); } while (0);
    // 0x510244: 0x2454c690  addiu       $s4, $v0, -0x3970
    ctx->pc = 0x510244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x510248: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x510248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC698u, _value); } while (0);
    // 0x51024c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x51024cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC690u));
    // 0x510250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x510250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510254: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x510254u;
    {
        const bool branch_taken_0x510254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x510258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510254u;
        // 0x510258: 0x3c10008f  lui         $s0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510254) {
            ctx->pc = 0x510280u;
            goto label_510280;
        }
    }
    ctx->pc = 0x51025Cu;
    // 0x51025c: 0x2610c69c  addiu       $s0, $s0, -0x3964
    ctx->pc = 0x51025cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952604));
    // 0x510260: 0xc143de8  jal         func_50F7A0
    ctx->pc = 0x510260u;
    SET_GPR_U32(ctx, 31, 0x510268u);
    ctx->pc = 0x510264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510260u;
    // 0x510264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F7A0u, 0x510260u, 0x510268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510268u;
label_510268:
    // 0x510268: 0xc143f8c  jal         func_50FE30
    ctx->pc = 0x510268u;
    SET_GPR_U32(ctx, 31, 0x510270u);
    ctx->pc = 0x50FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50FE30u, 0x510268u, 0x510270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510270u;
label_510270:
    // 0x510270: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x510270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x510274: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x510274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x510278: 0xc143de8  jal         func_50F7A0
    ctx->pc = 0x510278u;
    SET_GPR_U32(ctx, 31, 0x510280u);
    ctx->pc = 0x51027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510278u;
    // 0x51027c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F7A0u, 0x510278u, 0x510280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510280u;
label_510280:
    // 0x510280: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x510280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x510284: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x510284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x510288: 0x2453c6ac  addiu       $s3, $v0, -0x3954
    ctx->pc = 0x510288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952620));
    // 0x51028c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x51028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x510290: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x510290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6ACu));
    // 0x510294: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x510294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x510298: 0x96460018  lhu         $a2, 0x18($s2)
    ctx->pc = 0x510298u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x51029c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x51029cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x5102a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5102a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5102a4: 0x2450c6a0  addiu       $s0, $v0, -0x3960
    ctx->pc = 0x5102a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952608));
    // 0x5102a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5102a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5102ac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x5102acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x5102b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5102b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x5102b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x5102b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5102b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5102b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5102bc: 0xc14288e  jal         func_50A238
    ctx->pc = 0x5102BCu;
    SET_GPR_U32(ctx, 31, 0x5102C4u);
    ctx->pc = 0x5102C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5102BCu;
    // 0x5102c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A238u, 0x5102BCu, 0x5102C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5102C4u;
label_5102c4:
    // 0x5102c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x5102c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5102c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x5102c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5102cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5102ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5102d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5102d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5102d4: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x5102d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x5102d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5102d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5102dc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5102dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5102e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5102e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5102e4: 0xc14481c  jal         func_512070
    ctx->pc = 0x5102E4u;
    SET_GPR_U32(ctx, 31, 0x5102ECu);
    ctx->pc = 0x5102E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5102E4u;
    // 0x5102e8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5102E4u, 0x5102ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5102ECu;
label_5102ec:
    // 0x5102ec: 0x5456002f  bnel        $v0, $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x5102ECu;
    {
        const bool branch_taken_0x5102ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x5102ec) {
            ctx->pc = 0x5102F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5102ECu;
            // 0x5102f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5103ACu;
            goto label_5103ac;
        }
    }
    ctx->pc = 0x5102F4u;
    // 0x5102f4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x5102f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5102f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x5102f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5102fc: 0x2484c6a4  addiu       $a0, $a0, -0x395C
    ctx->pc = 0x5102fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952612));
    // 0x510300: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x510300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x510304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6A4u));
    // 0x510308: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x510308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x51030c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x51030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x510310: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x510310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x510314: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510318: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51031c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51031cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x510320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510324: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x510324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510328: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x510328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x51032c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x51032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x510330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510334: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x510334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x510338: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x51033c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x51033cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510340: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x510340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x510344: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x510344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x510348: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51034c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51034cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x510350: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x510350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510354: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x510354u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x510358: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x510358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x51035c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x51035cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x510360: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x510360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510364: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x510364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x510368: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x510368u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x51036c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x51036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x510370: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x510370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510374: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x510374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x510378: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x510378u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x51037c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510380: 0xa4650008  sh          $a1, 0x8($v1)
    ctx->pc = 0x510380u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x510384: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x510384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510388: 0xa445000a  sh          $a1, 0xA($v0)
    ctx->pc = 0x510388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x51038c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x51038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510390: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x510390u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x510394: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x510394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510398: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x510398u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x51039c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x51039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5103a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x5103a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x5103a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5103a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x5103a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5103a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5103ac:
    // 0x5103ac: 0xc14481c  jal         func_512070
    ctx->pc = 0x5103ACu;
    SET_GPR_U32(ctx, 31, 0x5103B4u);
    ctx->pc = 0x5103B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5103ACu;
    // 0x5103b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5103ACu, 0x5103B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5103B4u;
label_5103b4:
    // 0x5103b4: 0x1456003a  bne         $v0, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x5103B4u;
    {
        const bool branch_taken_0x5103b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x5103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5103B4u;
        // 0x5103b8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5103b4) {
            ctx->pc = 0x5104A0u;
            goto label_5104a0;
        }
    }
    ctx->pc = 0x5103BCu;
    // 0x5103bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x5103bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5103c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5103c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5103c4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x5103c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5103c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5103c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5103cc: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x5103ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5103d0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x5103d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x5103d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5103d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5103d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5103d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5103dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x5103dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5103e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5103e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5103e4: 0x24a5ffe7  addiu       $a1, $a1, -0x19
    ctx->pc = 0x5103e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967271));
    // 0x5103e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5103e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5103ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5103ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5103f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5103f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5103f4: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x5103f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x5103f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x5103f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5103fc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x5103fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x510400: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x510400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510404: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x510404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x510408: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x510408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x51040c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x51040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x510410: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510414: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x510414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x510418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x51041c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x51041cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510420: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x510420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x510424: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x510424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x510428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51042c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x510430: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x510430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x510434: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x510434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510438: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x510438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x51043c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x51043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x510440: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x510440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x510444: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x510444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x510448: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x510448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x51044c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x51044cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x510450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x510450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510454: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x510454u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x510458: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x510458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x51045c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x51045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510460: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x510460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x510464: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x510464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x510468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x510468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x51046c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x51046cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x510470: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x510470u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x510474: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x510474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510478: 0xa4670008  sh          $a3, 0x8($v1)
    ctx->pc = 0x510478u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x51047c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x51047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510480: 0xa447000a  sh          $a3, 0xA($v0)
    ctx->pc = 0x510480u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x510484: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x510484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510488: 0xa468000c  sh          $t0, 0xC($v1)
    ctx->pc = 0x510488u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x51048c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x51048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510490: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x510490u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x510494: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x510494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x510498: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x510498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x51049c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x51049cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5104a0:
    // 0x5104a0: 0xc14401c  jal         func_510070
    ctx->pc = 0x5104A0u;
    SET_GPR_U32(ctx, 31, 0x5104A8u);
    ctx->pc = 0x510070u;
    goto label_510070;
    ctx->pc = 0x5104A8u;
label_5104a8:
    // 0x5104a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x5104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x5104ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5104acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5104b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5104b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5104b4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x5104b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x5104b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5104b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5104bc: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x5104bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x5104c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5104c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5104c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5104c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5104c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5104c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5104cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5104ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5104d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5104d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5104d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5104d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5104d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5104d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5104dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5104dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5104e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5104E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5104E0u;
        // 0x5104e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5104E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5104E8u;
}
