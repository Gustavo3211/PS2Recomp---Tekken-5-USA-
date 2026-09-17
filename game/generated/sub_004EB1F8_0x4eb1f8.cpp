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

// Function: sub_004EB1F8
// Address: 0x4eb1f8 - 0x4eb748
void sub_004EB1F8_0x4eb1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB1F8_0x4eb1f8");
#endif

    switch (ctx->pc) {
        case 0x4eb2fcu: goto label_4eb2fc;
        case 0x4eb318u: goto label_4eb318;
        case 0x4eb334u: goto label_4eb334;
        case 0x4eb35cu: goto label_4eb35c;
        case 0x4eb364u: goto label_4eb364;
        case 0x4eb36cu: goto label_4eb36c;
        case 0x4eb430u: goto label_4eb430;
        case 0x4eb470u: goto label_4eb470;
        case 0x4eb52cu: goto label_4eb52c;
        case 0x4eb568u: goto label_4eb568;
        case 0x4eb614u: goto label_4eb614;
        case 0x4eb61cu: goto label_4eb61c;
        case 0x4eb65cu: goto label_4eb65c;
        case 0x4eb718u: goto label_4eb718;
        default: break;
    }

    ctx->pc = 0x4eb1f8u;

    // 0x4eb1f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eb1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4eb1fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4eb1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4eb200: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4eb200u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eb204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eb208: 0x26c2014a  addiu       $v0, $s6, 0x14A
    ctx->pc = 0x4eb208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 330));
    // 0x4eb20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4eb20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4eb210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4eb210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4eb214: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4eb214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4eb218: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4eb218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4eb21c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4eb21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4eb220: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4eb220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4eb224: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4eb224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eb228: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4eb228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4eb22c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4eb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4eb230: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4eb230u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4eb234: 0x4a000c8  bltz        $a1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x4EB234u;
    {
        const bool branch_taken_0x4eb234 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4EB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB234u;
        // 0x4eb238: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb234) {
            ctx->pc = 0x4EB558u;
            goto label_4eb558;
        }
    }
    ctx->pc = 0x4EB23Cu;
    // 0x4eb23c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eb240: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4eb240u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb244: 0x245511e8  addiu       $s5, $v0, 0x11E8
    ctx->pc = 0x4eb244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
    // 0x4eb248: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4eb248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4eb24c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4eb24cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eb250: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb254: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4eb254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4eb258: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4eb258u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4eb25c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb260: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4eb260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb264: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4eb264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4eb268: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb26c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb270: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4eb270u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4eb274: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4eb274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb278: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4EB278u;
    {
        const bool branch_taken_0x4eb278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB278u;
        // 0x4eb27c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb278) {
            ctx->pc = 0x4EB2A8u;
            goto label_4eb2a8;
        }
    }
    ctx->pc = 0x4EB280u;
    // 0x4eb280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eb280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eb284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eb284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eb288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eb28c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eb28cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb290: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eb290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eb294: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eb294u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb298: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4eb298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eb29c: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4EB29Cu;
    ctx->pc = 0x4EB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB29Cu;
    // 0x4eb2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EB2A4u;
    // 0x4eb2a4: 0x0  nop
    ctx->pc = 0x4eb2a4u;
    // NOP
label_4eb2a8:
    // 0x4eb2a8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4eb2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4eb2ac: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4eb2acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4eb2b0: 0x267311f4  addiu       $s3, $s3, 0x11F4
    ctx->pc = 0x4eb2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4596));
    // 0x4eb2b4: 0x265211f8  addiu       $s2, $s2, 0x11F8
    ctx->pc = 0x4eb2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    // 0x4eb2b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4eb2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4eb2bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4eb2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb2c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4eb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4eb2c4: 0x34a50046  ori         $a1, $a1, 0x46
    ctx->pc = 0x4eb2c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)70);
    // 0x4eb2c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eb2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eb2cc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4eb2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4eb2d0: 0x30820046  andi        $v0, $a0, 0x46
    ctx->pc = 0x4eb2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)70);
    // 0x4eb2d4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4eb2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4eb2d8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4eb2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4eb2dc: 0x261011fc  addiu       $s0, $s0, 0x11FC
    ctx->pc = 0x4eb2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4604));
    // 0x4eb2e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4eb2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4eb2e4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4eb2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4eb2e8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4eb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4eb2ec: 0x263111ec  addiu       $s1, $s1, 0x11EC
    ctx->pc = 0x4eb2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4588));
    // 0x4eb2f0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4eb2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4eb2f4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EB2F4u;
    SET_GPR_U32(ctx, 31, 0x4EB2FCu);
    ctx->pc = 0x4EB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB2F4u;
    // 0x4eb2f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EB2F4u, 0x4EB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB2FCu;
label_4eb2fc:
    // 0x4eb2fc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4eb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb300: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb304: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb308: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb30c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4eb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4eb310: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4EB310u;
    SET_GPR_U32(ctx, 31, 0x4EB318u);
    ctx->pc = 0x4EB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB310u;
    // 0x4eb314: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4EB310u, 0x4EB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB318u;
label_4eb318:
    // 0x4eb318: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4eb318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb31c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4eb31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4eb320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb324: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4eb324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb328: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4eb328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4eb32c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EB32Cu;
    SET_GPR_U32(ctx, 31, 0x4EB334u);
    ctx->pc = 0x4EB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB32Cu;
    // 0x4eb330: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EB32Cu, 0x4EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB334u;
label_4eb334:
    // 0x4eb334: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4eb334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb338: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4eb338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb33c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4eb33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb340: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb344: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4eb344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4eb348: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eb34c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4eb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4eb350: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4eb350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4eb354: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EB354u;
    SET_GPR_U32(ctx, 31, 0x4EB35Cu);
    ctx->pc = 0x4EB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB354u;
    // 0x4eb358: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EB354u, 0x4EB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB35Cu;
label_4eb35c:
    // 0x4eb35c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EB35Cu;
    SET_GPR_U32(ctx, 31, 0x4EB364u);
    ctx->pc = 0x4EB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB35Cu;
    // 0x4eb360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EB35Cu, 0x4EB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB364u;
label_4eb364:
    // 0x4eb364: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EB364u;
    SET_GPR_U32(ctx, 31, 0x4EB36Cu);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EB364u, 0x4EB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB36Cu;
label_4eb36c:
    // 0x4eb36c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4eb36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb370: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb374: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eb374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eb378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb37c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb380: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4eb380u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb384: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eb384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb388: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4eb388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4eb38c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x4eb38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4eb390: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eb390u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eb394: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4eb394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4eb398: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb39c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb3a4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eb3a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eb3a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb3ac: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4eb3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb3b0: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x4eb3b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb3b4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4eb3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4eb3b8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb3bc: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x4eb3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x4eb3c0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eb3c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb3c4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4eb3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4eb3c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb3cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb3d0: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eb3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eb3d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb3d8: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4eb3d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb3dc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb3dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb3e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4eb3e4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb3e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb3ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb3f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb3f4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb3f8: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x4eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x4eb3fc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb404: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb408: 0x86c20022  lh          $v0, 0x22($s6)
    ctx->pc = 0x4eb408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 34)));
    // 0x4eb40c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb410: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eb410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb414: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eb414u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eb418: 0x86c20024  lh          $v0, 0x24($s6)
    ctx->pc = 0x4eb418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x4eb41c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb420: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4eb420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4eb424: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x4eb424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x4eb428: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EB428u;
    SET_GPR_U32(ctx, 31, 0x4EB430u);
    ctx->pc = 0x4EB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB428u;
    // 0x4eb42c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EB428u, 0x4EB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB430u;
label_4eb430:
    // 0x4eb430: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4eb430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb434: 0x86c20026  lh          $v0, 0x26($s6)
    ctx->pc = 0x4eb434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
    // 0x4eb438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4eb438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb43c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb440: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4eb440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb444: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb44c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eb44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb454: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eb454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eb458: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x4eb458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x4eb45c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eb45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eb460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb464: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eb464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4eb468: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EB468u;
    SET_GPR_U32(ctx, 31, 0x4EB470u);
    ctx->pc = 0x4EB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB468u;
    // 0x4eb46c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EB468u, 0x4EB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB470u;
label_4eb470:
    // 0x4eb470: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4eb470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb474: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4eb478: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4eb478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4eb47c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4eb47cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb480: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eb480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eb484: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4eb484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4eb488: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4eb488u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb48c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb490: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4eb490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eb494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eb498: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x4eb498u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb49c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4eb49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4eb4a0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4eb4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb4a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4eb4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4eb4a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb4a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb4ac: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4eb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4eb4b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4eb4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb4b4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eb4b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eb4b8: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4eb4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4eb4bc: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4eb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4eb4c0: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x4eb4c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4eb4c4: 0x966a0000  lhu         $t2, 0x0($s3)
    ctx->pc = 0x4eb4c4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb4c8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4eb4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4eb4cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb4ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb4d0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4eb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4eb4d4: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x4eb4d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x4eb4d8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4eb4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4eb4dc: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4eb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4eb4e0: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4eb4e4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4eb4e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb4e8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4eb4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4eb4ec: 0xa4ab232c  sh          $t3, 0x232C($a1)
    ctx->pc = 0x4eb4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 11));
    // 0x4eb4f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb4f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb4f4: 0xa4aa2334  sh          $t2, 0x2334($a1)
    ctx->pc = 0x4eb4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 10));
    // 0x4eb4f8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4eb4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4eb4fc: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4eb4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eb500: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x4eb500u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x4eb504: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x4eb504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x4eb508: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4eb508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4eb50c: 0xaca02340  sw          $zero, 0x2340($a1)
    ctx->pc = 0x4eb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9024), GPR_U32(ctx, 0));
    // 0x4eb510: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x4eb510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x4eb514: 0xaca02344  sw          $zero, 0x2344($a1)
    ctx->pc = 0x4eb514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9028), GPR_U32(ctx, 0));
    // 0x4eb518: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb51c: 0xaca02348  sw          $zero, 0x2348($a1)
    ctx->pc = 0x4eb51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9032), GPR_U32(ctx, 0));
    // 0x4eb520: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4eb520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eb524: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4EB524u;
    SET_GPR_U32(ctx, 31, 0x4EB52Cu);
    ctx->pc = 0x4EB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB524u;
    // 0x4eb528: 0xa4a02332  sh          $zero, 0x2332($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9010), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4EB524u, 0x4EB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB52Cu;
label_4eb52c:
    // 0x4eb52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4eb52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eb530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eb534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eb538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eb538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb53c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eb53cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eb540: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eb540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb544: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eb544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eb548: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eb548u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb54c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4eb54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eb550: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4EB550u;
    ctx->pc = 0x4EB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB550u;
    // 0x4eb554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EB558u;
label_4eb558:
    // 0x4eb558: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4eb558u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4eb55c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4eb55cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4eb560: 0xc126d66  jal         func_49B598
    ctx->pc = 0x4EB560u;
    SET_GPR_U32(ctx, 31, 0x4EB568u);
    ctx->pc = 0x4EB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB560u;
    // 0x4eb564: 0x263111f4  addiu       $s1, $s1, 0x11F4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4EB560u, 0x4EB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB568u;
label_4eb568:
    // 0x4eb568: 0x267311fc  addiu       $s3, $s3, 0x11FC
    ctx->pc = 0x4eb568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4604));
    // 0x4eb56c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4eb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb570: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4eb570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb574: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4eb574u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb578: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eb578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eb57c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4eb57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4eb580: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x4eb580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4eb584: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4eb584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4eb588: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4eb588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4eb58c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4eb58cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4eb590: 0x26b511f8  addiu       $s5, $s5, 0x11F8
    ctx->pc = 0x4eb590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
    // 0x4eb594: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4eb594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4eb598: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4eb598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4eb59c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4eb59cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4eb5a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4eb5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4eb5a4: 0x269411e8  addiu       $s4, $s4, 0x11E8
    ctx->pc = 0x4eb5a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4584));
    // 0x4eb5a8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x4eb5a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11F8u, _value); } while (0);
    // 0x4eb5ac: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4eb5acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4eb5b0: 0x261011ec  addiu       $s0, $s0, 0x11EC
    ctx->pc = 0x4eb5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4588));
    // 0x4eb5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb5b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4eb5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eb5bc: 0x86c20022  lh          $v0, 0x22($s6)
    ctx->pc = 0x4eb5bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 34)));
    // 0x4eb5c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb5c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4eb5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eb5c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4eb5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4eb5cc: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4eb5ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb5d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb5d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eb5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eb5d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4eb5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4eb5dc: 0x86c20024  lh          $v0, 0x24($s6)
    ctx->pc = 0x4eb5dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x4eb5e0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4eb5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eb5e4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4eb5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4eb5e8: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4eb5e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb5ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4eb5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4eb5f0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x4eb5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4eb5f4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4eb5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4eb5f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb5fc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4eb5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4eb600: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4eb600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4eb604: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4eb604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4eb608: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4eb608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4eb60c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EB60Cu;
    SET_GPR_U32(ctx, 31, 0x4EB614u);
    ctx->pc = 0x4EB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB60Cu;
    // 0x4eb610: 0xae660000  sw          $a2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EB60Cu, 0x4EB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB614u;
label_4eb614:
    // 0x4eb614: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EB614u;
    SET_GPR_U32(ctx, 31, 0x4EB61Cu);
    ctx->pc = 0x4EB618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB614u;
    // 0x4eb618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EB614u, 0x4EB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB61Cu;
label_4eb61c:
    // 0x4eb61c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4eb61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eb620: 0x86c20026  lh          $v0, 0x26($s6)
    ctx->pc = 0x4eb620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
    // 0x4eb624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb628: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb62c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb630: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4eb630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4eb634: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eb634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb638: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eb638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb63c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb640: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4eb640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4eb644: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x4eb644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x4eb648: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4eb648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4eb64c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb650: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb654: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EB654u;
    SET_GPR_U32(ctx, 31, 0x4EB65Cu);
    ctx->pc = 0x4EB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB654u;
    // 0x4eb658: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EB654u, 0x4EB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB65Cu;
label_4eb65c:
    // 0x4eb65c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4eb65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb660: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4eb660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4eb664: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4eb664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4eb668: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4eb668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb66c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eb66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eb670: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4eb670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4eb674: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4eb674u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb678: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb67c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4eb67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eb680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eb684: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4eb684u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb688: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4eb688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4eb68c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4eb68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb690: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4eb690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4eb694: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb698: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4eb698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4eb69c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4eb69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6a0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eb6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eb6a4: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4eb6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4eb6a8: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4eb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4eb6ac: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x4eb6acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4eb6b0: 0x962a0000  lhu         $t2, 0x0($s1)
    ctx->pc = 0x4eb6b0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb6b4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4eb6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4eb6b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb6bc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4eb6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4eb6c0: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4eb6c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4eb6c4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4eb6c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4eb6c8: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eb6cc: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4eb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4eb6d0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4eb6d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eb6d4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4eb6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4eb6d8: 0xa4ab232c  sh          $t3, 0x232C($a1)
    ctx->pc = 0x4eb6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 11));
    // 0x4eb6dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb6dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb6e0: 0xa4aa2334  sh          $t2, 0x2334($a1)
    ctx->pc = 0x4eb6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 10));
    // 0x4eb6e4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4eb6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4eb6e8: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4eb6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eb6ec: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4eb6ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4eb6f0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x4eb6f4: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4eb6f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4eb6f8: 0xaca02340  sw          $zero, 0x2340($a1)
    ctx->pc = 0x4eb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9024), GPR_U32(ctx, 0));
    // 0x4eb6fc: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4eb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4eb700: 0xaca02344  sw          $zero, 0x2344($a1)
    ctx->pc = 0x4eb700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9028), GPR_U32(ctx, 0));
    // 0x4eb704: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4eb704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb708: 0xaca02348  sw          $zero, 0x2348($a1)
    ctx->pc = 0x4eb708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9032), GPR_U32(ctx, 0));
    // 0x4eb70c: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4eb70cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eb710: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4EB710u;
    SET_GPR_U32(ctx, 31, 0x4EB718u);
    ctx->pc = 0x4EB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB710u;
    // 0x4eb714: 0xa4a02332  sh          $zero, 0x2332($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9010), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4EB710u, 0x4EB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB718u;
label_4eb718:
    // 0x4eb718: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4eb718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eb71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eb720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eb724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eb724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb728: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eb728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eb72c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eb72cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb730: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eb730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eb734: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eb734u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb738: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4eb738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eb73c: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EB73Cu;
    ctx->pc = 0x4EB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB73Cu;
    // 0x4eb740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EB744u;
    // 0x4eb744: 0x0  nop
    ctx->pc = 0x4eb744u;
    // NOP
    ctx->pc = 0x4eb748u;
}
