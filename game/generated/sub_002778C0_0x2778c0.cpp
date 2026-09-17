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

// Function: sub_002778C0
// Address: 0x2778c0 - 0x277aa0
void sub_002778C0_0x2778c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002778C0_0x2778c0");
#endif

    switch (ctx->pc) {
        case 0x2778d4u: goto label_2778d4;
        case 0x277978u: goto label_277978;
        case 0x277a40u: goto label_277a40;
        default: break;
    }

    ctx->pc = 0x2778c0u;

    // 0x2778c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2778c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2778c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2778c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2778c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2778c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2778cc: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x2778CCu;
    SET_GPR_U32(ctx, 31, 0x2778D4u);
    ctx->pc = 0x2778D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2778CCu;
    // 0x2778d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x2778CCu, 0x2778D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2778D4u;
    {
        const bool branch_taken_0x2778d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778d4) {
            ctx->pc = 0x2778D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2778D4u;
            // 0x2778d8: 0x9602003c  lhu         $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2778E8u;
            goto label_2778e8;
        }
    }
    ctx->pc = 0x2778DCu;
    // 0x2778dc: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x2778dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x2778e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2778E0u;
    {
        const bool branch_taken_0x2778e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778E0u;
        // 0x2778e4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778e0) {
            ctx->pc = 0x2778FCu;
            goto label_2778fc;
        }
    }
    ctx->pc = 0x2778E8u;
label_2778e8:
    // 0x2778e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2778e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2778ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2778ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2778f0: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x2778f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2778f4: 0x8c63ca78  lw          $v1, -0x3588($v1)
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953592)));
    // 0x2778f8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2778f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_2778fc:
    // 0x2778fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2778fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x277900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277904: 0x3e00008  jr          $ra
    ctx->pc = 0x277904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277904u;
        // 0x277908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27790Cu;
    // 0x27790c: 0x0  nop
    ctx->pc = 0x27790cu;
    // NOP
    // 0x277910: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x277910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x277914: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x277914u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277918: 0x8f88ca70  lw          $t0, -0x3590($gp)
    ctx->pc = 0x277918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x27791c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x27791cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277920: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x277920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x277924: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277928: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x277928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27792c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x27792cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277930: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x277934: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x277934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27793c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x277940: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x277940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x277944: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x277948: 0x8c84acc8  lw          $a0, -0x5338($a0)
    ctx->pc = 0x277948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945992)));
    // 0x27794c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x27794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277950: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x277950u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277954: 0x11090050  beq         $t0, $t1, . + 4 + (0x50 << 2)
    ctx->pc = 0x277954u;
    {
        const bool branch_taken_0x277954 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x277958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277954u;
        // 0x277958: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277954) {
            ctx->pc = 0x277A98u;
            goto label_277a98;
        }
    }
    ctx->pc = 0x27795Cu;
    // 0x27795c: 0x18e00030  blez        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x27795Cu;
    {
        const bool branch_taken_0x27795c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x277960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27795Cu;
        // 0x277960: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27795c) {
            ctx->pc = 0x277A20u;
            goto label_277a20;
        }
    }
    ctx->pc = 0x277964u;
    // 0x277964: 0x4a0002e  bltz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x277964u;
    {
        const bool branch_taken_0x277964 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x277964) {
            ctx->pc = 0x277A20u;
            goto label_277a20;
        }
    }
    ctx->pc = 0x27796Cu;
    // 0x27796c: 0x18c0002c  blez        $a2, . + 4 + (0x2C << 2)
    ctx->pc = 0x27796Cu;
    {
        const bool branch_taken_0x27796c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x277970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27796Cu;
        // 0x277970: 0x55080  sll         $t2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27796c) {
            ctx->pc = 0x277A20u;
            goto label_277a20;
        }
    }
    ctx->pc = 0x277974u;
    // 0x277974: 0x0  nop
    ctx->pc = 0x277974u;
    // NOP
label_277978:
    // 0x277978: 0x14d1021  addu        $v0, $t2, $t5
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x27797c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x27797cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x277980: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x277980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x277984: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x277984u;
    {
        const bool branch_taken_0x277984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277984u;
        // 0x277988: 0xc1880  sll         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277984) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x27798Cu;
    // 0x27798c: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x27798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x277990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x277990u;
    {
        const bool branch_taken_0x277990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277990u;
        // 0x277994: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277990) {
            ctx->pc = 0x2779A0u;
            goto label_2779a0;
        }
    }
    ctx->pc = 0x277998u;
label_277998:
    // 0x277998: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x277998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x27799c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x27799cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_2779a0:
    // 0x2779a0: 0x14d2021  addu        $a0, $t2, $t5
    ctx->pc = 0x2779a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x2779a4: 0x6b4021  addu        $t0, $v1, $t3
    ctx->pc = 0x2779a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2779a8: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x2779a8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2779ac: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x2779acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x2779b0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2779b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2779b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2779B4u;
    {
        const bool branch_taken_0x2779b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779B4u;
        // 0x2779b8: 0x14d1021  addu        $v0, $t2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779b4) {
            ctx->pc = 0x2779F8u;
            goto label_2779f8;
        }
    }
    ctx->pc = 0x2779BCu;
    // 0x2779bc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2779bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2779c0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2779c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2779c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2779C4u;
    {
        const bool branch_taken_0x2779c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779C4u;
        // 0x2779c8: 0x31227fff  andi        $v0, $t1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779c4) {
            ctx->pc = 0x2779D8u;
            goto label_2779d8;
        }
    }
    ctx->pc = 0x2779CCu;
    // 0x2779cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2779ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2779d0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2779d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2779d4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2779d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2779d8:
    // 0x2779d8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2779d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2779dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2779DCu;
    {
        const bool branch_taken_0x2779dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779DCu;
        // 0x2779e0: 0x14d1021  addu        $v0, $t2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779dc) {
            ctx->pc = 0x2779F8u;
            goto label_2779f8;
        }
    }
    ctx->pc = 0x2779E4u;
    // 0x2779e4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2779e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2779e8: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x2779e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x2779ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2779ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2779f0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2779f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2779f4: 0x14d1021  addu        $v0, $t2, $t5
    ctx->pc = 0x2779f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_2779f8:
    // 0x2779f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2779f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2779fc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2779fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x277a00: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x277a00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x277a04: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x277a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x277a08: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x277A08u;
    {
        const bool branch_taken_0x277a08 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x277A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A08u;
        // 0x277a0c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a08) {
            ctx->pc = 0x277A20u;
            goto label_277a20;
        }
    }
    ctx->pc = 0x277A10u;
    // 0x277a10: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277A10u;
    {
        const bool branch_taken_0x277a10 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x277A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A10u;
        // 0x277a14: 0x186102a  slt         $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a10) {
            ctx->pc = 0x277A20u;
            goto label_277a20;
        }
    }
    ctx->pc = 0x277A18u;
    // 0x277a18: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x277A18u;
    {
        const bool branch_taken_0x277a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A18u;
        // 0x277a1c: 0x55080  sll         $t2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a18) {
            ctx->pc = 0x277978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277978;
        }
    }
    ctx->pc = 0x277A20u;
label_277a20:
    // 0x277a20: 0x11c0001c  beqz        $t6, . + 4 + (0x1C << 2)
    ctx->pc = 0x277A20u;
    {
        const bool branch_taken_0x277a20 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A20u;
        // 0x277a24: 0xc17c2  srl         $v0, $t4, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a20) {
            ctx->pc = 0x277A94u;
            goto label_277a94;
        }
    }
    ctx->pc = 0x277A28u;
    // 0x277a28: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x277a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x277a2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x277a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x277a30: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x277A30u;
    {
        const bool branch_taken_0x277a30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x277A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A30u;
        // 0x277a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a30) {
            ctx->pc = 0x277A94u;
            goto label_277a94;
        }
    }
    ctx->pc = 0x277A38u;
    // 0x277a38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a3c: 0x0  nop
    ctx->pc = 0x277a3cu;
    // NOP
label_277a40:
    // 0x277a40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x277a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x277a44: 0x1851823  subu        $v1, $t4, $a1
    ctx->pc = 0x277a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x277a48: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x277a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x277a4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x277a50: 0x88440003  lwl         $a0, 0x3($v0)
    ctx->pc = 0x277a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x277a54: 0x98440000  lwr         $a0, 0x0($v0)
    ctx->pc = 0x277a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x277a58: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x277a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277a5c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x277a60: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x277a64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x277a68: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x277a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277a6c: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x277a6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x277a70: 0x886a0003  lwl         $t2, 0x3($v1)
    ctx->pc = 0x277a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x277a74: 0x986a0000  lwr         $t2, 0x0($v1)
    ctx->pc = 0x277a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x277a78: 0xa84a0003  swl         $t2, 0x3($v0)
    ctx->pc = 0x277a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277a7c: 0xb84a0000  swr         $t2, 0x0($v0)
    ctx->pc = 0x277a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277a80: 0x8baa0003  lwl         $t2, 0x3($sp)
    ctx->pc = 0x277a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x277a84: 0x9baa0000  lwr         $t2, 0x0($sp)
    ctx->pc = 0x277a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x277a88: 0xa86a0003  swl         $t2, 0x3($v1)
    ctx->pc = 0x277a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277a8c: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x277A8Cu;
    {
        const bool branch_taken_0x277a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A8Cu;
        // 0x277a90: 0xb86a0000  swr         $t2, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a8c) {
            ctx->pc = 0x277A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277a40;
        }
    }
    ctx->pc = 0x277A94u;
label_277a94:
    // 0x277a94: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x277a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_277a98:
    // 0x277a98: 0x3e00008  jr          $ra
    ctx->pc = 0x277A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A98u;
        // 0x277a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277AA0u;
}
