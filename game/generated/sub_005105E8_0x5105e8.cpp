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

// Function: sub_005105E8
// Address: 0x5105e8 - 0x510760
void sub_005105E8_0x5105e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005105E8_0x5105e8");
#endif

    switch (ctx->pc) {
        case 0x510698u: goto label_510698;
        case 0x5106a8u: goto label_5106a8;
        case 0x510740u: goto label_510740;
        default: break;
    }

    ctx->pc = 0x5105e8u;

label_5105e8:
    // 0x5105e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x5105e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5105ec: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5105ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x5105f0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x5105f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x5105f4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5105f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5105f8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x5105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x5105fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5105fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x510600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x510604: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x510604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x510608: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x510608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x51060c: 0x2474c6cc  addiu       $s4, $v1, -0x3934
    ctx->pc = 0x51060cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952652));
    // 0x510610: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x510610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x510614: 0x2610a8c0  addiu       $s0, $s0, -0x5740
    ctx->pc = 0x510614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944960));
    // 0x510618: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x510618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x51061c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x51061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x510620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x510620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x510624: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x510624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x510628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x510628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x51062c: 0x24b1c6c8  addiu       $s1, $a1, -0x3938
    ctx->pc = 0x51062cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952648));
    // 0x510630: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x510630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x510634: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x510634u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x510638: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x510638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x51063c: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x51063cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x510640: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x510640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x510644: 0x3c170090  lui         $s7, 0x90
    ctx->pc = 0x510644u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)144 << 16));
    // 0x510648: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x510648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x51064c: 0x26e3f080  addiu       $v1, $s7, -0xF80
    ctx->pc = 0x51064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963328));
    // 0x510650: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x510650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x510654: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x510654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x510658: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x510658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x51065c: 0x8c680064  lw          $t0, 0x64($v1)
    ctx->pc = 0x51065cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x8FF0E4u));
    // 0x510660: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x510660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x510664: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x510664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x510668: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x510668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x51066c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x51066cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x510670: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x510670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x510674: 0x86130000  lh          $s3, 0x0($s0)
    ctx->pc = 0x510674u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x510678: 0x2472c6c0  addiu       $s2, $v1, -0x3940
    ctx->pc = 0x510678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952640));
    // 0x51067c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x51067cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x510680: 0xaec8c6bc  sw          $t0, -0x3944($s6)
    ctx->pc = 0x510680u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294952636), GPR_U32(ctx, 8));
    // 0x510684: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x510684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x510688: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x510688u;
    {
        const bool branch_taken_0x510688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x51068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510688u;
        // 0x51068c: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510688) {
            ctx->pc = 0x5106A0u;
            goto label_5106a0;
        }
    }
    ctx->pc = 0x510690u;
    // 0x510690: 0xc14413a  jal         func_5104E8
    ctx->pc = 0x510690u;
    SET_GPR_U32(ctx, 31, 0x510698u);
    ctx->pc = 0x5104E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5104E8u, 0x510690u, 0x510698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510698u;
label_510698:
    // 0x510698: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x510698u;
    {
        const bool branch_taken_0x510698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510698u;
        // 0x51069c: 0x8ec3c6bc  lw          $v1, -0x3944($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510698) {
            ctx->pc = 0x510708u;
            goto label_510708;
        }
    }
    ctx->pc = 0x5106A0u;
label_5106a0:
    // 0x5106a0: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x5106A0u;
    SET_GPR_U32(ctx, 31, 0x5106A8u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x5106A0u, 0x5106A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5106A8u;
label_5106a8:
    // 0x5106a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x5106a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5106ac: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x5106ACu;
    {
        const bool branch_taken_0x5106ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x5106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5106ACu;
        // 0x5106b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5106ac) {
            ctx->pc = 0x510704u;
            goto label_510704;
        }
    }
    ctx->pc = 0x5106B4u;
    // 0x5106b4: 0xa4d3006a  sh          $s3, 0x6A($a2)
    ctx->pc = 0x5106b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 106), (uint16_t)GPR_U32(ctx, 19));
    // 0x5106b8: 0xa4c20008  sh          $v0, 0x8($a2)
    ctx->pc = 0x5106b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5106bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x5106bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5106c0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x5106c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x5106c4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x5106c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x5106c8: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x5106c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x5106cc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x5106ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5106d0: 0xa4c3000e  sh          $v1, 0xE($a2)
    ctx->pc = 0x5106d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x5106d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x5106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5106d8: 0xacc20064  sw          $v0, 0x64($a2)
    ctx->pc = 0x5106d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 2));
    // 0x5106dc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x5106dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5106e0: 0xa4c30068  sh          $v1, 0x68($a2)
    ctx->pc = 0x5106e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x5106e4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x5106e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x5106e8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x5106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x5106ec: 0xacc40060  sw          $a0, 0x60($a2)
    ctx->pc = 0x5106ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 4));
    // 0x5106f0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x5106f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x5106f4: 0xa4c2006c  sh          $v0, 0x6C($a2)
    ctx->pc = 0x5106f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x5106f8: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x5106f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x5106fc: 0xa4c00070  sh          $zero, 0x70($a2)
    ctx->pc = 0x5106fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x510700: 0xa4c3006e  sh          $v1, 0x6E($a2)
    ctx->pc = 0x510700u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 110), (uint16_t)GPR_U32(ctx, 3));
label_510704:
    // 0x510704: 0x8ec3c6bc  lw          $v1, -0x3944($s6)
    ctx->pc = 0x510704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952636)));
label_510708:
    // 0x510708: 0x26e2f080  addiu       $v0, $s7, -0xF80
    ctx->pc = 0x510708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963328));
    // 0x51070c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x51070cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x510710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510714: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x510714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x510718: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x510718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x51071c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x51071cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x510720: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x510720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x510724: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x510724u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x510728: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x510728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x51072c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x510730: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x510730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x510734: 0x3e00008  jr          $ra
    ctx->pc = 0x510734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510734u;
        // 0x510738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51073Cu;
    // 0x51073c: 0x0  nop
    ctx->pc = 0x51073cu;
    // NOP
label_510740:
    // 0x510740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x510740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x510744: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x510744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x510748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x510748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x51074c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x51074cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x510750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x510750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510754: 0x814417a  j           func_5105E8
    ctx->pc = 0x510754u;
    ctx->pc = 0x510758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510754u;
    // 0x510758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_5105e8;
    ctx->pc = 0x51075Cu;
    // 0x51075c: 0x0  nop
    ctx->pc = 0x51075cu;
    // NOP
    ctx->pc = 0x510760u;
}
