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

// Function: sub_00507138
// Address: 0x507138 - 0x507340
void sub_00507138_0x507138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507138_0x507138");
#endif

    switch (ctx->pc) {
        case 0x50715cu: goto label_50715c;
        case 0x507238u: goto label_507238;
        case 0x507258u: goto label_507258;
        case 0x50725cu: goto label_50725c;
        case 0x50727cu: goto label_50727c;
        default: break;
    }

    ctx->pc = 0x507138u;

    // 0x507138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x507138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50713c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x507140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x507144: 0x2450c558  addiu       $s0, $v0, -0x3AA8
    ctx->pc = 0x507144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x507148: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x507148u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC558u));
    // 0x50714c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x507150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x507150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x507154: 0xc14481c  jal         func_512070
    ctx->pc = 0x507154u;
    SET_GPR_U32(ctx, 31, 0x50715Cu);
    ctx->pc = 0x507158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507154u;
    // 0x507158: 0x2484c554  addiu       $a0, $a0, -0x3AAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x507154u, 0x50715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50715Cu;
label_50715c:
    // 0x50715c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50715cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x507160: 0x2465c564  addiu       $a1, $v1, -0x3A9C
    ctx->pc = 0x507160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952292));
    // 0x507164: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x507168: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x507168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50716c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50716cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x507170: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x507170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x507174: 0x14440022  bne         $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x507174u;
    {
        const bool branch_taken_0x507174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x507178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507174u;
        // 0x507178: 0x2466c570  addiu       $a2, $v1, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507174) {
            ctx->pc = 0x507200u;
            goto label_507200;
        }
    }
    ctx->pc = 0x50717Cu;
    // 0x50717c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50717cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x507180: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x507180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x507184: 0x24420255  addiu       $v0, $v0, 0x255
    ctx->pc = 0x507184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 597));
    // 0x507188: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50718c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x507190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507194: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507198: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x507198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50719c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50719cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5071a0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5071a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5071a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5071a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071a8: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x5071a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x5071ac: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5071acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5071b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5071b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071b4: 0x9502c568  lhu         $v0, -0x3A98($t0)
    ctx->pc = 0x5071b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294952296)));
    // 0x5071b8: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x5071b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x5071bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5071bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071c0: 0x9465c56c  lhu         $a1, -0x3A94($v1)
    ctx->pc = 0x5071c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x8EC56Cu));
    // 0x5071c4: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x5071c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x5071c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x5071c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5071cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5071ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x5071d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x5071d4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x5071d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x5071d8: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x5071d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5071dc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x5071dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5071e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5071e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071e4: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x5071e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x5071e8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x5071e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5071ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5071ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071f0: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x5071f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x5071f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5071f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x5071f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x5071fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5071fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_507200:
    // 0x507200: 0x2505c568  addiu       $a1, $t0, -0x3A98
    ctx->pc = 0x507200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952296));
    // 0x507204: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x507204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x507208: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x507208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50720c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x507210: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x507210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x507214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507218: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x507218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50721c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50721cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507220: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x507220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507224: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507228: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x507228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50722c: 0x3e00008  jr          $ra
    ctx->pc = 0x50722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50722Cu;
        // 0x507230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507234u;
    // 0x507234: 0x0  nop
    ctx->pc = 0x507234u;
    // NOP
label_507238:
    // 0x507238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x507238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50723c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x507240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x507244: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x507244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x507248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x507248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50724c: 0x2451c578  addiu       $s1, $v0, -0x3A88
    ctx->pc = 0x50724cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x507250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x507250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x507254: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x507254u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
label_507258:
    // 0x507258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x507258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50725c:
    // 0x50725c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x50725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x507260: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x507260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x507264: 0x10640030  beq         $v1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x507264u;
    {
        const bool branch_taken_0x507264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x507268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507264u;
        // 0x507268: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507264) {
            ctx->pc = 0x507328u;
            goto label_507328;
        }
    }
    ctx->pc = 0x50726Cu;
    // 0x50726c: 0x2644c554  addiu       $a0, $s2, -0x3AAC
    ctx->pc = 0x50726cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952276));
    // 0x507270: 0x2450c558  addiu       $s0, $v0, -0x3AA8
    ctx->pc = 0x507270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x507274: 0xc14481c  jal         func_512070
    ctx->pc = 0x507274u;
    SET_GPR_U32(ctx, 31, 0x50727Cu);
    ctx->pc = 0x507278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507274u;
    // 0x507278: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x507274u, 0x50727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50727Cu;
label_50727c:
    // 0x50727c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x507280: 0x5443fff6  bnel        $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x507280u;
    {
        const bool branch_taken_0x507280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x507280) {
            ctx->pc = 0x507284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x507280u;
            // 0x507284: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50725Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50725c;
        }
    }
    ctx->pc = 0x507288u;
    // 0x507288: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x507288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50728c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507290: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x507290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x507294: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x507294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x507298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x507298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50729c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072a0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x5072a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x5072a4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x5072a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5072a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072b0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x5072b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x5072b4: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x5072b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5072b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072c0: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x5072c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x5072c4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x5072c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072d0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x5072d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x5072d4: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x5072d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5072d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072e0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x5072e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x5072e4: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x5072e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5072e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5072f0: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x5072f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x5072f4: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x5072f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x5072f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5072f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5072fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507300: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x507300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x507304: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x507304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x507308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x507308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50730c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x507310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x507314: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x507314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507318: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x507318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x50731c: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x50731Cu;
    {
        const bool branch_taken_0x50731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x507320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50731Cu;
        // 0x507320: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50731c) {
            ctx->pc = 0x507258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_507258;
        }
    }
    ctx->pc = 0x507324u;
    // 0x507324: 0x0  nop
    ctx->pc = 0x507324u;
    // NOP
label_507328:
    // 0x507328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50732c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50732cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x507330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x507334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x507338: 0x3e00008  jr          $ra
    ctx->pc = 0x507338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507338u;
        // 0x50733c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507340u;
}
