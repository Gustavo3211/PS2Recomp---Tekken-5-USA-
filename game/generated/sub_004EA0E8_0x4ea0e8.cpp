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

// Function: sub_004EA0E8
// Address: 0x4ea0e8 - 0x4ea4c8
void sub_004EA0E8_0x4ea0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA0E8_0x4ea0e8");
#endif

    switch (ctx->pc) {
        case 0x4ea110u: goto label_4ea110;
        case 0x4ea12cu: goto label_4ea12c;
        case 0x4ea428u: goto label_4ea428;
        case 0x4ea438u: goto label_4ea438;
        case 0x4ea448u: goto label_4ea448;
        case 0x4ea458u: goto label_4ea458;
        case 0x4ea468u: goto label_4ea468;
        case 0x4ea478u: goto label_4ea478;
        case 0x4ea488u: goto label_4ea488;
        case 0x4ea498u: goto label_4ea498;
        case 0x4ea4a8u: goto label_4ea4a8;
        default: break;
    }

    ctx->pc = 0x4ea0e8u;

    // 0x4ea0e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ea0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ea0ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ea0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ea0f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ea0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea0f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ea0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ea0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ea0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ea0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ea0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ea100: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ea100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ea104: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ea104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ea108: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EA108u;
    SET_GPR_U32(ctx, 31, 0x4EA110u);
    ctx->pc = 0x4EA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA108u;
    // 0x4ea10c: 0x267401b4  addiu       $s4, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EA108u, 0x4EA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA110u;
label_4ea110:
    // 0x4ea110: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ea110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ea114: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4ea114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4ea118: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4ea118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ea11c: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x4EA11Cu;
    {
        const bool branch_taken_0x4ea11c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA11Cu;
        // 0x4ea120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea11c) {
            ctx->pc = 0x4EA380u;
            goto label_4ea380;
        }
    }
    ctx->pc = 0x4EA124u;
    // 0x4ea124: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EA124u;
    SET_GPR_U32(ctx, 31, 0x4EA12Cu);
    ctx->pc = 0x4EA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA124u;
    // 0x4ea128: 0x26700014  addiu       $s0, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EA124u, 0x4EA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA12Cu;
label_4ea12c:
    // 0x4ea12c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ea12cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ea130: 0x25ad11ec  addiu       $t5, $t5, 0x11EC
    ctx->pc = 0x4ea130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4588));
    // 0x4ea134: 0x866301be  lh          $v1, 0x1BE($s3)
    ctx->pc = 0x4ea134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4ea138: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4ea138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ea13c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ea13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea140: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ea140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ea144: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ea144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ea148: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ea148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea14c: 0x24e711e8  addiu       $a3, $a3, 0x11E8
    ctx->pc = 0x4ea14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4584));
    // 0x4ea150: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ea150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ea154: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4ea154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea158: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4ea158u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4ea15c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ea15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea160: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ea160u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ea164: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ea164u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ea168: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4ea168u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ea16c: 0x256b11f4  addiu       $t3, $t3, 0x11F4
    ctx->pc = 0x4ea16cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4596));
    // 0x4ea170: 0x25ce11f8  addiu       $t6, $t6, 0x11F8
    ctx->pc = 0x4ea170u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4600));
    // 0x4ea174: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4ea174u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ea178: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ea17c: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x4ea17cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ea180: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ea180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ea184: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ea184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ea188: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ea188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ea18c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ea18cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ea190: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4ea190u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4ea194: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x4ea194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea198: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ea198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ea19c: 0x258c11fc  addiu       $t4, $t4, 0x11FC
    ctx->pc = 0x4ea19cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4604));
    // 0x4ea1a0: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4ea1a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ea1a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4ea1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4ea1a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4ea1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4ea1ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ea1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ea1b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ea1b4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ea1b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ea1b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ea1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ea1bc: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ea1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea1c0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4ea1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4ea1c4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ea1c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ea1c8: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4ea1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4ea1cc: 0x26780140  addiu       $t8, $s3, 0x140
    ctx->pc = 0x4ea1ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x4ea1d0: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x4ea1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x4ea1d4: 0x266f0010  addiu       $t7, $s3, 0x10
    ctx->pc = 0x4ea1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4ea1d8: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4ea1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ea1dc: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x4ea1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4ea1e0: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4ea1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ea1e4: 0x241204a4  addiu       $s2, $zero, 0x4A4
    ctx->pc = 0x4ea1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1188));
    // 0x4ea1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ea1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ea1ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ea1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ea1f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ea1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ea1f4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ea1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ea1f8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4ea1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4ea1fc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ea1fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea200: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea204: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea208: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea20c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4ea20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x4ea210: 0x248480a8  addiu       $a0, $a0, -0x7F58
    ctx->pc = 0x4ea210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934696));
    // 0x4ea214: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ea214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ea218: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4ea218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ea21c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4ea21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4ea220: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ea220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ea224: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4ea224u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4ea228: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x4ea228u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x4ea22c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ea22cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ea230: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ea230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ea234: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4ea234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ea238: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ea238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ea23c: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4ea23cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4ea240: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x4ea240u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x4ea244: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ea244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ea248: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x4ea248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4ea24c: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4ea24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ea250: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ea250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ea254: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ea254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ea258: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4ea258u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4ea25c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ea25cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ea260: 0x8f070000  lw          $a3, 0x0($t8)
    ctx->pc = 0x4ea260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4ea264: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4ea264u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ea268: 0xaf271208  sw          $a3, 0x1208($t9)
    ctx->pc = 0x4ea268u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4616), GPR_U32(ctx, 7));
    // 0x4ea26c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4ea26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4ea270: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ea270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ea274: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea278: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ea278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ea27c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ea27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ea280: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4ea280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4ea284: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x4ea284u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x4ea288: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4ea288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4ea28c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4ea28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ea290: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ea290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ea294: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea298: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ea298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ea29c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ea29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ea2a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea2a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4ea2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4ea2a8: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4ea2a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4ea2ac: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x4ea2acu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    // 0x4ea2b0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x4ea2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4ea2b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ea2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ea2b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea2bc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4ea2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ea2c0: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x4ea2c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x4ea2c4: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4ea2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4ea2c8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4ea2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4ea2cc: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4ea2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ea2d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ea2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ea2d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ea2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ea2d8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4ea2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4ea2dc: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4ea2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ea2e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea2e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ea2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ea2e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea2ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ea2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ea2f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ea2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ea2f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ea2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ea2f8: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ea2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ea2fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ea2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea300: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ea300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ea304: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea308: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4ea308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4ea30c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ea30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ea310: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4ea310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4ea314: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ea314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ea318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea31c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea31cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea320: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea324: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4ea324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x4ea328: 0x248480d0  addiu       $a0, $a0, -0x7F30
    ctx->pc = 0x4ea328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934736));
    // 0x4ea32c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ea32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ea330: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4ea330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ea334: 0xa663011c  sh          $v1, 0x11C($s3)
    ctx->pc = 0x4ea334u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea338: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x4ea338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4ea33c: 0xa672000c  sh          $s2, 0xC($s3)
    ctx->pc = 0x4ea33cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x4ea340: 0xa662015c  sh          $v0, 0x15C($s3)
    ctx->pc = 0x4ea340u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea344: 0xa6600158  sh          $zero, 0x158($s3)
    ctx->pc = 0x4ea344u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea348: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4ea348u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea34c: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4ea34cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea350: 0xa660013a  sh          $zero, 0x13A($s3)
    ctx->pc = 0x4ea350u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea354: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4ea354u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea358: 0xa6600162  sh          $zero, 0x162($s3)
    ctx->pc = 0x4ea358u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea35c: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4ea35cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea360: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4ea360u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea364: 0xa6600168  sh          $zero, 0x168($s3)
    ctx->pc = 0x4ea364u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea368: 0xa660016a  sh          $zero, 0x16A($s3)
    ctx->pc = 0x4ea368u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea36c: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4ea36cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ea370: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4ea370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ea374: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ea374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ea378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EA378u;
    {
        const bool branch_taken_0x4ea378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA378u;
        // 0x4ea37c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea378) {
            ctx->pc = 0x4EA388u;
            goto label_4ea388;
        }
    }
    ctx->pc = 0x4EA380u;
label_4ea380:
    // 0x4ea380: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x4ea380u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x4ea384: 0x26780140  addiu       $t8, $s3, 0x140
    ctx->pc = 0x4ea384u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
label_4ea388:
    // 0x4ea388: 0x8f070000  lw          $a3, 0x0($t8)
    ctx->pc = 0x4ea388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4ea38c: 0xaf271208  sw          $a3, 0x1208($t9)
    ctx->pc = 0x4ea38cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4616), GPR_U32(ctx, 7));
    // 0x4ea390: 0x84e201b4  lh          $v0, 0x1B4($a3)
    ctx->pc = 0x4ea390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x4ea394: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4EA394u;
    {
        const bool branch_taken_0x4ea394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA394u;
        // 0x4ea398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea394) {
            ctx->pc = 0x4EA3C0u;
            goto label_4ea3c0;
        }
    }
    ctx->pc = 0x4EA39Cu;
    // 0x4ea39c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ea39cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ea3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea3a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea3a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ea3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea3ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ea3acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ea3b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ea3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ea3b4: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EA3B4u;
    ctx->pc = 0x4EA3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA3B4u;
    // 0x4ea3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA3BCu;
    // 0x4ea3bc: 0x0  nop
    ctx->pc = 0x4ea3bcu;
    // NOP
label_4ea3c0:
    // 0x4ea3c0: 0x84e20160  lh          $v0, 0x160($a3)
    ctx->pc = 0x4ea3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x4ea3c4: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4EA3C4u;
    {
        const bool branch_taken_0x4ea3c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ea3c4) {
            ctx->pc = 0x4EA3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA3C4u;
            // 0x4ea3c8: 0x966201bc  lhu         $v0, 0x1BC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA3F0u;
            goto label_4ea3f0;
        }
    }
    ctx->pc = 0x4EA3CCu;
    // 0x4ea3cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ea3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea3d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ea3d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ea3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea3d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea3dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ea3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea3e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ea3e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ea3e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ea3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ea3e8: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EA3E8u;
    ctx->pc = 0x4EA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA3E8u;
    // 0x4ea3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA3F0u;
label_4ea3f0:
    // 0x4ea3f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea3f4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea3f8: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x4ea3f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4ea3fc: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x4EA3FCu;
    {
        const bool branch_taken_0x4ea3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA3FCu;
        // 0x4ea400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea3fc) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA404u;
    // 0x4ea404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ea404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ea408: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ea408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ea40c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ea40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ea410: 0x8c63ba90  lw          $v1, -0x4570($v1)
    ctx->pc = 0x4ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949520)));
    // 0x4ea414: 0x600008  jr          $v1
    ctx->pc = 0x4EA414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EA420u: goto label_4ea420;
            case 0x4EA430u: goto label_4ea430;
            case 0x4EA440u: goto label_4ea440;
            case 0x4EA450u: goto label_4ea450;
            case 0x4EA460u: goto label_4ea460;
            case 0x4EA470u: goto label_4ea470;
            case 0x4EA480u: goto label_4ea480;
            case 0x4EA490u: goto label_4ea490;
            case 0x4EA4A0u: goto label_4ea4a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA414u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EA41Cu;
    // 0x4ea41c: 0x0  nop
    ctx->pc = 0x4ea41cu;
    // NOP
label_4ea420:
    // 0x4ea420: 0xc13a932  jal         func_4EA4C8
    ctx->pc = 0x4EA420u;
    SET_GPR_U32(ctx, 31, 0x4EA428u);
    ctx->pc = 0x4EA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA420u;
    // 0x4ea424: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA4C8u, 0x4EA420u, 0x4EA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA428u;
label_4ea428:
    // 0x4ea428: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4EA428u;
    {
        const bool branch_taken_0x4ea428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA428u;
        // 0x4ea42c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea428) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA430u;
label_4ea430:
    // 0x4ea430: 0xc13a998  jal         func_4EA660
    ctx->pc = 0x4EA430u;
    SET_GPR_U32(ctx, 31, 0x4EA438u);
    ctx->pc = 0x4EA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA430u;
    // 0x4ea434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA660u, 0x4EA430u, 0x4EA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA438u;
label_4ea438:
    // 0x4ea438: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EA438u;
    {
        const bool branch_taken_0x4ea438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA438u;
        // 0x4ea43c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea438) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA440u;
label_4ea440:
    // 0x4ea440: 0xc13a9f6  jal         func_4EA7D8
    ctx->pc = 0x4EA440u;
    SET_GPR_U32(ctx, 31, 0x4EA448u);
    ctx->pc = 0x4EA444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA440u;
    // 0x4ea444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA7D8u, 0x4EA440u, 0x4EA448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA448u;
label_4ea448:
    // 0x4ea448: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4EA448u;
    {
        const bool branch_taken_0x4ea448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA448u;
        // 0x4ea44c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea448) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA450u;
label_4ea450:
    // 0x4ea450: 0xc13aa10  jal         func_4EA840
    ctx->pc = 0x4EA450u;
    SET_GPR_U32(ctx, 31, 0x4EA458u);
    ctx->pc = 0x4EA454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA450u;
    // 0x4ea454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA840u, 0x4EA450u, 0x4EA458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA458u;
label_4ea458:
    // 0x4ea458: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EA458u;
    {
        const bool branch_taken_0x4ea458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA458u;
        // 0x4ea45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea458) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA460u;
label_4ea460:
    // 0x4ea460: 0xc13aa1c  jal         func_4EA870
    ctx->pc = 0x4EA460u;
    SET_GPR_U32(ctx, 31, 0x4EA468u);
    ctx->pc = 0x4EA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA460u;
    // 0x4ea464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA870u, 0x4EA460u, 0x4EA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA468u;
label_4ea468:
    // 0x4ea468: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EA468u;
    {
        const bool branch_taken_0x4ea468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA468u;
        // 0x4ea46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea468) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA470u;
label_4ea470:
    // 0x4ea470: 0xc13aa5e  jal         func_4EA978
    ctx->pc = 0x4EA470u;
    SET_GPR_U32(ctx, 31, 0x4EA478u);
    ctx->pc = 0x4EA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA470u;
    // 0x4ea474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA978u, 0x4EA470u, 0x4EA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA478u;
label_4ea478:
    // 0x4ea478: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EA478u;
    {
        const bool branch_taken_0x4ea478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA478u;
        // 0x4ea47c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea478) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA480u;
label_4ea480:
    // 0x4ea480: 0xc13aa76  jal         func_4EA9D8
    ctx->pc = 0x4EA480u;
    SET_GPR_U32(ctx, 31, 0x4EA488u);
    ctx->pc = 0x4EA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA480u;
    // 0x4ea484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA9D8u, 0x4EA480u, 0x4EA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA488u;
label_4ea488:
    // 0x4ea488: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA488u;
    {
        const bool branch_taken_0x4ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA488u;
        // 0x4ea48c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea488) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA490u;
label_4ea490:
    // 0x4ea490: 0xc13ab16  jal         func_4EAC58
    ctx->pc = 0x4EA490u;
    SET_GPR_U32(ctx, 31, 0x4EA498u);
    ctx->pc = 0x4EA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA490u;
    // 0x4ea494: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAC58u, 0x4EA490u, 0x4EA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA498u;
label_4ea498:
    // 0x4ea498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EA498u;
    {
        const bool branch_taken_0x4ea498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA498u;
        // 0x4ea49c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea498) {
            ctx->pc = 0x4EA4ACu;
            goto label_4ea4ac;
        }
    }
    ctx->pc = 0x4EA4A0u;
label_4ea4a0:
    // 0x4ea4a0: 0xc13ac7e  jal         func_4EB1F8
    ctx->pc = 0x4EA4A0u;
    SET_GPR_U32(ctx, 31, 0x4EA4A8u);
    ctx->pc = 0x4EA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA4A0u;
    // 0x4ea4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB1F8u, 0x4EA4A0u, 0x4EA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA4A8u;
label_4ea4a8:
    // 0x4ea4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea4ac:
    // 0x4ea4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea4b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ea4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea4b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ea4b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ea4b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ea4b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ea4bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ea4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ea4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4EA4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA4C0u;
        // 0x4ea4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA4C8u;
}
