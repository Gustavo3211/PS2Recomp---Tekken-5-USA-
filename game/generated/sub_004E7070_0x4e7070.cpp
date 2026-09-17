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

// Function: sub_004E7070
// Address: 0x4e7070 - 0x4e72f0
void sub_004E7070_0x4e7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7070_0x4e7070");
#endif

    switch (ctx->pc) {
        case 0x4e709cu: goto label_4e709c;
        case 0x4e7128u: goto label_4e7128;
        case 0x4e71fcu: goto label_4e71fc;
        case 0x4e7208u: goto label_4e7208;
        case 0x4e7230u: goto label_4e7230;
        case 0x4e72a4u: goto label_4e72a4;
        case 0x4e72acu: goto label_4e72ac;
        case 0x4e72b4u: goto label_4e72b4;
        default: break;
    }

    ctx->pc = 0x4e7070u;

    // 0x4e7070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e7074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e7078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e707c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e7080: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e7080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e7084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e7088: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e7088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e708c: 0x442002b  bltzl       $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4E708Cu;
    {
        const bool branch_taken_0x4e708c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e708c) {
            ctx->pc = 0x4E7090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E708Cu;
            // 0x4e7090: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E713Cu;
            goto label_4e713c;
        }
    }
    ctx->pc = 0x4E7094u;
    // 0x4e7094: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E7094u;
    SET_GPR_U32(ctx, 31, 0x4E709Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E7094u, 0x4E709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E709Cu;
label_4e709c:
    // 0x4e709c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e709cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e70a0: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x4e70a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x4e70a4: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4e70a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4e70a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e70ac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e70acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e70b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e70b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e70b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e70b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e70bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e70bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e70c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e70c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e70c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e70c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e70c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e70cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4e70ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4e70d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e70d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e70d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e70d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e70d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e70dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e70dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e70e0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e70e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e70e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e70e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e70ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e70ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e70f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e70f4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e70f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e70f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e70fc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e70fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e7100: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e7100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e7104: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e7104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e7108: 0x24217ec8  addiu       $at, $at, 0x7EC8
    ctx->pc = 0x4e7108u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32456));
    // 0x4e710c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e7110: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e7110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e7114: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4e7114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e7118: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4e7118u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e711c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e711cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e7120: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E7120u;
    SET_GPR_U32(ctx, 31, 0x4E7128u);
    ctx->pc = 0x4E7124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7120u;
    // 0x4e7124: 0xa605011c  sh          $a1, 0x11C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E7120u, 0x4E7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7128u;
label_4e7128:
    // 0x4e7128: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e7128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e712c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e712cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e7130: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e7130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e7134: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e7134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e7138: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e7138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4e713c:
    // 0x4e713c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e713cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e7140: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4e7140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e7144: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E7144u;
    {
        const bool branch_taken_0x4e7144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7144u;
        // 0x4e7148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7144) {
            ctx->pc = 0x4E7168u;
            goto label_4e7168;
        }
    }
    ctx->pc = 0x4E714Cu;
    // 0x4e714c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E714Cu;
    {
        const bool branch_taken_0x4e714c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E714Cu;
        // 0x4e7150: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e714c) {
            ctx->pc = 0x4E7180u;
            goto label_4e7180;
        }
    }
    ctx->pc = 0x4E7154u;
    // 0x4e7154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e715c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E715Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E715Cu;
        // 0x4e7160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E715Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7164u;
    // 0x4e7164: 0x0  nop
    ctx->pc = 0x4e7164u;
    // NOP
label_4e7168:
    // 0x4e7168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e716c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e716cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7178: 0x8139c66  j           func_4E7198
    ctx->pc = 0x4E7178u;
    ctx->pc = 0x4E717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7178u;
    // 0x4e717c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7198u;
    goto label_4e7198;
    ctx->pc = 0x4E7180u;
label_4e7180:
    // 0x4e7180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e718c: 0x8139cb6  j           func_4E72D8
    ctx->pc = 0x4E718Cu;
    ctx->pc = 0x4E7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E718Cu;
    // 0x4e7190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E72D8u;
    goto label_4e72d8;
    ctx->pc = 0x4E7194u;
    // 0x4e7194: 0x0  nop
    ctx->pc = 0x4e7194u;
    // NOP
label_4e7198:
    // 0x4e7198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e7198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e719c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e719cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e71a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e71a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e71a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e71a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e71a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e71a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e71ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4e71acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e71b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e71b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e71b4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e71b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e71b8: 0x252911dc  addiu       $t1, $t1, 0x11DC
    ctx->pc = 0x4e71b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4572));
    // 0x4e71bc: 0x254a11e0  addiu       $t2, $t2, 0x11E0
    ctx->pc = 0x4e71bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4576));
    // 0x4e71c0: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4e71c0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F11DCu));
    // 0x4e71c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e71c8: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4e71c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F11E0u));
    // 0x4e71cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4e71d0: 0x3463041d  ori         $v1, $v1, 0x41D
    ctx->pc = 0x4e71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1053);
    // 0x4e71d4: 0x3442041e  ori         $v0, $v0, 0x41E
    ctx->pc = 0x4e71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1054);
    // 0x4e71d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e71d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e71dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e71dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e71e0: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e71e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e71e4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e71e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4e71e8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4e71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4e71ec: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e71ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e71f0: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4e71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4e71f4: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E71F4u;
    SET_GPR_U32(ctx, 31, 0x4E71FCu);
    ctx->pc = 0x4E71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E71F4u;
    // 0x4e71f8: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E71F4u, 0x4E71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E71FCu;
label_4e71fc:
    // 0x4e71fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7200: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E7200u;
    SET_GPR_U32(ctx, 31, 0x4E7208u);
    ctx->pc = 0x4E7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7200u;
    // 0x4e7204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E7200u, 0x4E7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7208u;
label_4e7208:
    // 0x4e7208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e720c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E720Cu;
    {
        const bool branch_taken_0x4e720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E720Cu;
        // 0x4e7210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e720c) {
            ctx->pc = 0x4E7228u;
            goto label_4e7228;
        }
    }
    ctx->pc = 0x4E7214u;
    // 0x4e7214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e721c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7220: 0x8139c9a  j           func_4E7268
    ctx->pc = 0x4E7220u;
    ctx->pc = 0x4E7224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7220u;
    // 0x4e7224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7268u;
    goto label_4e7268;
    ctx->pc = 0x4E7228u;
label_4e7228:
    // 0x4e7228: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4E7228u;
    SET_GPR_U32(ctx, 31, 0x4E7230u);
    ctx->pc = 0x4E722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7228u;
    // 0x4e722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4E7228u, 0x4E7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7230u;
label_4e7230:
    // 0x4e7230: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E7230u;
    {
        const bool branch_taken_0x4e7230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7230u;
        // 0x4e7234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7230) {
            ctx->pc = 0x4E7250u;
            goto label_4e7250;
        }
    }
    ctx->pc = 0x4E7238u;
    // 0x4e7238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e723c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e723cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7244: 0x8139c9a  j           func_4E7268
    ctx->pc = 0x4E7244u;
    ctx->pc = 0x4E7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7244u;
    // 0x4e7248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7268u;
    goto label_4e7268;
    ctx->pc = 0x4E724Cu;
    // 0x4e724c: 0x0  nop
    ctx->pc = 0x4e724cu;
    // NOP
label_4e7250:
    // 0x4e7250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e7254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e725c: 0x8139cb6  j           func_4E72D8
    ctx->pc = 0x4E725Cu;
    ctx->pc = 0x4E7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E725Cu;
    // 0x4e7260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E72D8u;
    goto label_4e72d8;
    ctx->pc = 0x4E7264u;
    // 0x4e7264: 0x0  nop
    ctx->pc = 0x4e7264u;
    // NOP
label_4e7268:
    // 0x4e7268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e7268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e726c: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x4e726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x4e7270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e7274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7278: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e7278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e727c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e7280: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4e7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4e7284: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4e7284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4e7288: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4e7288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e728c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4e728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4e7290: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4e7290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4e7294: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4e7294u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4e7298: 0xa465232e  sh          $a1, 0x232E($v1)
    ctx->pc = 0x4e7298u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4e729c: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E729Cu;
    SET_GPR_U32(ctx, 31, 0x4E72A4u);
    ctx->pc = 0x4E72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E729Cu;
    // 0x4e72a0: 0xa466232c  sh          $a2, 0x232C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E729Cu, 0x4E72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E72A4u;
label_4e72a4:
    // 0x4e72a4: 0xc122f12  jal         func_48BC48
    ctx->pc = 0x4E72A4u;
    SET_GPR_U32(ctx, 31, 0x4E72ACu);
    ctx->pc = 0x4E72A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E72A4u;
    // 0x4e72a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC48u, 0x4E72A4u, 0x4E72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E72ACu;
label_4e72ac:
    // 0x4e72ac: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E72ACu;
    SET_GPR_U32(ctx, 31, 0x4E72B4u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E72ACu, 0x4E72B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E72B4u;
label_4e72b4:
    // 0x4e72b4: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4e72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e72b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e72b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e72bc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e72bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e72c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e72c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e72c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e72c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e72c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e72cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e72ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e72d0: 0x8139cb6  j           func_4E72D8
    ctx->pc = 0x4E72D0u;
    ctx->pc = 0x4E72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E72D0u;
    // 0x4e72d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E72D8u;
    goto label_4e72d8;
    ctx->pc = 0x4E72D8u;
label_4e72d8:
    // 0x4e72d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e72d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e72dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e72dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e72e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e72e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e72e4: 0x8122db4  j           func_48B6D0
    ctx->pc = 0x4E72E4u;
    ctx->pc = 0x4E72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E72E4u;
    // 0x4e72e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E72ECu;
    // 0x4e72ec: 0x0  nop
    ctx->pc = 0x4e72ecu;
    // NOP
    ctx->pc = 0x4e72f0u;
}
